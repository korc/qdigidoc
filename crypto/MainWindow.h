/*
 * QDigiDocCrypto
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

#include "ui_MainWindow.h"

class QActionGroup;
class CKey;
class CryptoDoc;

namespace Crypto {

class MainWindow: public QWidget, private Ui::MainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = nullptr);

	void closeDoc();

private Q_SLOTS:
	void buttonClicked( int button );
	void changeCard( QAction *a );
	void changeLang( QAction *a );
	void messageClicked( const QString &link );
	void on_introCheck_stateChanged( int state );
	void on_languages_activated( int index );
	void open( const QStringList &params );
	void parseLink( const QString &url );
	void showCardStatus();
	void removeKey( int id );
	void updateView();

private:
	enum Pages {
		Home,
		Intro,
		View
	};
	enum Buttons {
		HeadAbout,
		HeadHelp,
		HomeCreate,
		HomeView,
		IntroBack,
		IntroAgree,
		ViewClose,
		ViewCrypto,
		ViewEmail,
		ViewBrowse,
		ViewSave,
		ViewSaveAll,
		ViewAddFile,
		ViewAddKey
	};
	bool addFile( const QString &file );
	bool event(QEvent *e) override;
	void retranslate();
	QString selectFile( const QString &filename );
	void setCurrentPage( Pages page );

	QActionGroup *cardsGroup;
	CryptoDoc	*doc;
	QStringList lang, params;
	QButtonGroup *buttonGroup;
	bool quitOnClose = false;
};

}
