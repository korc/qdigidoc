/*
 * QDigiDocClient
 *
 * Copyright (C) 2009-2011 Jargo Kõster <jargo@innovaatik.ee>
 * Copyright (C) 2009-2011 Raul Metsma <raul@innovaatik.ee>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#pragma once

#include <QAbstractTableModel>

#include <digidocpp/WDoc.h>

namespace digidoc
{
	class Document;
	class Exception;
	class Signer;
	class Signature;
}

class DigiDoc;
class QDateTime;
class QSslCertificate;
class QStringList;

class DocumentModel: public QAbstractTableModel
{
	Q_OBJECT
public:
	int columnCount( const QModelIndex &parent = QModelIndex() ) const;
	QVariant data( const QModelIndex &index, int role = Qt::DisplayRole ) const;
	Qt::ItemFlags flags( const QModelIndex &index ) const;
	QMimeData *mimeData( const QModelIndexList &indexes ) const;
	QStringList mimeTypes() const;
	bool removeRows( int row, int count, const QModelIndex &parent = QModelIndex() );
	int rowCount( const QModelIndex &parent = QModelIndex() ) const;

	QString copy( const QModelIndex &index, const QString &path ) const;
	digidoc::Document document( const QModelIndex &index ) const;
	QString mkpath( const QModelIndex &index, const QString &path ) const;

public Q_SLOTS:
	void open( const QModelIndex &index );

private:
	DocumentModel( DigiDoc *doc );
	Q_DISABLE_COPY(DocumentModel)

	DigiDoc *d;

	friend class DigiDoc;
};

class DigiDocSignature
{
public:
	enum SignatureStatus
	{
		Valid,
		Invalid,
		Unknown,
	};
	enum SignatureType
	{
		BESType,
		TMType,
		TSType,
		DDocType,
		UnknownType,
	};
	DigiDocSignature( const digidoc::Signature *signature, DigiDoc *parent );

	QSslCertificate	cert() const;
	QDateTime	dateTime() const;
	bool		isTest() const;
	QString		lastError() const;
	QString		location() const;
	QStringList	locations() const;
	QString		mediaType() const;
	QString		ocspDigestMethod() const;
	QByteArray	ocspDigestValue() const;
	QSslCertificate ocspCert() const;
	DigiDoc		*parent() const;
	QString		role() const;
	QStringList	roles() const;
	QString		signatureMethod() const;
	SignatureType type() const;
	SignatureStatus validate() const;

private:
	void setLastError( const digidoc::Exception &e ) const;
	int parseException( const digidoc::Exception &e ) const;
	void parseExceptionStrings( const digidoc::Exception &e, QStringList &causes ) const;

	const digidoc::Signature *s;
	mutable QString m_lastError;
	DigiDoc *m_parent;
};

class DigiDoc: public QObject
{
	Q_OBJECT
public:
	DigiDoc( QObject *parent = 0 );
	~DigiDoc();

	void addFile( const QString &file );
	bool addSignature( const QByteArray &signature );
	void create( const QString &file );
	void clear();
	DocumentModel *documentModel() const;
	QString fileName() const;
	bool isNull() const;
	bool open( const QString &file );
	void removeSignature( unsigned int num );
	void save( const QString &filename = QString() );
	bool sign(
		const QString &city,
		const QString &state,
		const QString &zip,
		const QString &country,
		const QString &role,
		const QString &role2 );
	QList<DigiDocSignature> signatures();
	digidoc::WDoc::DocumentType documentType();
	QByteArray getFileDigest( unsigned int i );

	static bool parseException( const digidoc::Exception &e, QStringList &causes,
		digidoc::Exception::ExceptionCode &code, int &ddocError );

private:
	bool checkDoc( bool status = false, const QString &msg = QString() );
	void setLastError( const QString &msg, const digidoc::Exception &e );

	digidoc::WDoc	*b;
	QString			m_fileName;
	DocumentModel *m_documentModel;

	friend class DocumentModel;
};
