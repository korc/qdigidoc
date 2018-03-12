DigiDoc3 version [3.13.6](https://github.com/open-eid/qdigidoc/releases/tag/v3.13.6) release notes
--------------------------------------
- Create appx artifacts for windows store (#146)
- Track mime copied files as tempFiles (#142)
- Don't allow to save edoc and adoc extension (#145)
- Build and code fixes and improvements

[Full Changelog](https://github.com/open-eid/qdigidoc/compare/v3.13.5...v3.13.6)

DigiDoc3 version [3.13.5](https://github.com/open-eid/qdigidoc/releases/tag/v3.13.5) release notes
--------------------------------------
- ECDH encryption and decryption support

[Full Changelog](https://github.com/open-eid/qdigidoc/compare/v3.13.4...v3.13.5)

DigiDoc3 version [3.13.4](https://github.com/open-eid/qdigidoc/releases/tag/v3.13.4) release notes
--------------------------------------
- Minor fixes

[Full Changelog](https://github.com/open-eid/qdigidoc/compare/v3.13.3...v3.13.4)

DigiDoc3 version [3.13.3](https://github.com/open-eid/qdigidoc/releases/tag/v3.13.3) release notes
--------------------------------------
- ECDSA token support
- Disabled encrypting and decrypting with ECDH token
- Minor fixes

[Full Changelog](https://github.com/open-eid/qdigidoc/compare/v3.13.2...v3.13.3)


DigiDoc3 version [3.13.2](https://github.com/open-eid/qdigidoc/releases/tag/v3.13.2) release notes
--------------------------------------
- Minor fixes

[Full Changelog](https://github.com/open-eid/qdigidoc/compare/v3.13.1...v3.13.2)


DigiDoc3 version [3.13.1](https://github.com/open-eid/qdigidoc/releases/tag/v3.13.1) release notes
--------------------------------------
- Restore compatibility with jdigidoc 3.11

[Full Changelog](https://github.com/open-eid/qdigidoc/compare/v3.13.0...v3.13.1)


DigiDoc3 version [3.13.0](https://github.com/open-eid/qdigidoc/releases/tag/v3.13.0) release notes
--------------------------------------
- Registered Latvian / Lithuanian "edoc" / "adoc" document extension
- ASiC-S validation support in qdigidoc client
- Warn on removing last file from container
- Improve EIDAS compatibility
- macOS Retina support
- Windows HiDPI support
- Text changes & fixes
- OpenSSL 1.1 compatbility

[Full Changelog](https://github.com/open-eid/qdigidoc/compare/v3.12.3...v3.13.0)


DigiDoc3 version [3.12.6](https://github.com/open-eid/qdigidoc/releases/tag/v3.12.6) release notes
--------------------------------------------
- Update “Unknown” texts (#60)

[Full Changelog](https://github.com/open-eid/qdigidoc/compare/v3.12.5...v3.12.6)


DigiDoc3 version [3.12.5](https://github.com/open-eid/qdigidoc/releases/tag/v3.12.5) release notes
--------------------------------------------
- Force update cached list with embed list when TSLSequenceNumber is lower

[Full Changelog](https://github.com/open-eid/qdigidoc/compare/v3.12.4...v3.12.5)


DigiDoc3 version [3.12.4](https://github.com/open-eid/qdigidoc/releases/tag/v3.12.4) release notes
--------------------------------------------
- Rebuild with new EU LOTL list

[Full Changelog](https://github.com/open-eid/qdigidoc/compare/v3.12.3...v3.12.4)


DigiDoc3 version 3.12.3 release notes
--------------------------------------
- Only warn on cancel of unsigned document when the document is newly created
- Remove "unsupported" warning on opening DDoc files
- Add option for getting diagnostics from command line
- Wrap long recipient names to avoid "remove" buttons getting hidden
- Grammar and spelling fixes for all languages


DigiDoc3 version 3.12.2 release notes
--------------------------------------
- Removed Qt 4.X support, upstream deprecated
- Verify PDF validation service SSL certificate
- Remove PDF validation warning


DigiDoc3 version 3.12.1 release notes
--------------------------------------
Changes compared to ver 3.12.0

- Split Windows Explorer Shell Extension to separate msi-s


DigiDoc3 version 3.12.0 release notes
--------------------------------------
Changes compared to ver 3.11.1

- Add option to enable SSL proxy settings
- Use libdigidocpp SONAME version 1 API
- Windows: Option to select CAPI backend
- Disabled SHA1 signing support
- Disabled DDoc container signing and creation
- OSX: increased minimum target to 10.8
- Option to use alternative background picture
- Loads correct PKCS11 driver runntime by ATR (supports, EE, LT, LV, FI cards)

List of known issues: https://github.com/open-eid/qdigidoc/wiki/Known-issues



DigiDoc3 version 3.11.1 release notes
--------------------------------------
Changes compared to ver 3.11

- Update translations
- Updated the default European Commission's master TSL list to version 119
- Select correct profile when signing DDOC with M-ID

List of known issues: https://github.com/open-eid/qdigidoc/wiki/Known-issues



DigiDoc3 version 3.11 release notes
--------------------------------------
Changes compared to ver 3.10

- Improved handling of temporary files, the files are now removed when the document is closed.
- Fixed setting file permissions when creating temporary files in Unix, the files are now created with permission 0600 instead of 0644
- Windows: Use cert store to poll CAPI drivers
- Fixed problem with "Send container to email" functionality in Windows 8 that occasionally caused errors when adding email attachments
- Windows: Fix email attachments with special characters in file name
- Optimized loading of TSL and other configuration settings. 
	- TSL list is now loaded in background and loaded only when opening BDOC and ASiC-e documents. 
	- The program is kept running for additional 10 seconds after closing to enable re-using existing configuration and speed up opening multiple documents in a row. 
- Improved PKCS#11 module polling in OSX, fixed occasional decryption errors  

Client:
- Fixed ASiC-E document validation warning, the warning is returned when the OCSP confirmation has been issued with a delay, i.e. more than 15 minutes and less than 24 hours after the signature time-stamp issuance time. 
- Added option to choose whether the mobile number and personal code values that have been entered by the user when signing with Mobile-ID are remembered by the application. 
- Improved ASiC-E format selection according to file name extension. When setting the name of the signed output file and choosing ".asice" or ".sce" file extension then the signature is created in ASiC-E format (i.e. BES/time-stamp signature). The default format that has been set in the settings view is ignored.
- Added ASiC-E with archive time-stamp validation support. 
	- Value "BES/time-stamp-archive" is used in "Signature format" field in signature details view. 
	- Added fields "Archive Timestamp", "Archive Timestamp (UTC)", "Archive TSA Certificate issuer" and "Archive TSA Certificate" to the signature details view. 
- Improved proxy usage when sending OCSP requests in Windows, the operating system's proxy setting are now used.



DigiDoc3 version 3.10 release notes
--------------------------------------
Changes compared to ver 3.9.1

- Development of the software can now be monitored in GitHub environment: https://github.com/open-eid/qdigidoc
- Fixed problem with "Send container to email" functionality with Thunderbird e-mail client. Added identification of the user's default e-mail client and implemented Thunderbird workaround for attachments
- Fixed problem with "Send container to email" functionality that appeared in OSX in case of Outlook e-mail client. Added Outlook to sandbox exception list.

Known issues:
- With OSX and Outlook 2014, "Send container to email" functionality in DigiDoc3 Client does not work from any other folder than the Documents folder.

Client:
- Started using BDOC as the default digital signature container format instead of DIGIDOC-XML 1.3. 
- Added explanatory information about BDOC format to the signing introduction view. 
- Added support for creating ASiC-E signatures (BDOC with time-stamps).
- Updated options for selecting the default digital signature container format in the "Settings" menu's "Signing" tab. Added option for ASiC-E format.
- Implemented functionality of using the appropriate signature format in case of adding signatures to existing BDOC and ASiC-E containers. By default, the format of the existing signature is used for new signatures.  
- Implemented TSL Trust service Status list functionality for BDOC and ASiC-E formats. TSL is used for checking the trustworthiness of trust-services (CA, OCSP, time-stamping services) during signature creation and validation.  The European Commission's (EC) TSL list (https://ec.europa.eu/information_society/policy/esignature/trusted-list/tl-mp.xml) is used for finding the trusted national TSL lists.
	- Certificates of all the EU member states' trust services that are registered in national TSL lists are supported.
	- By default, the Estonian national TSL list (http://sr.riik.ee/tsl/estonian-tsl.xml) is used.
	- Added the European Commission's TSL URL value to the signature details view.
	- Implemented TSL progress bar that indicates the progress of loading the TSL data during the application's startup.
	- Implemented automatic checking for new TSL versions. Added possibility to deactivate the automatic version check with the "Online TSL digest check" checkbox under "Settings" menu's "General" tab. 
	- Added pop-up notification to the user if the TSL version check was unsuccessful.
- Started using older version of esteid-pkcs11 driver in case of OSX 10.9 and earlier OSX versions.
- Implemented usage of the operating system's proxy settings via QT in case of Windows platform.

Crypto:
- Changed the usage of intermediate DDOC containers during encryption
	- By default, intermediate DDOC container is not used when encrypting a single data file. Note that such encrypted document cannot be decrypted with DigiDoc3 Crypto versions 3.8 and earlier.
	- Added checkbox to "Settings" menu's "General" view that enables to always use intermediate DDOC containers for interoperability with DigiDoc3 Crypto versions 3.8 and earlier.
- Fixed format error in the intermediate DDOC container's <DataFile> element's Size attribute. The value is now generated in bytes with no suffix.
- Improved memory usage with large files
- Added functionality to display information of the new E-resident Digi-ID certificate in the main window's "Keys" section
- Improved displaying of the encrypted document's name in the container content view. Previously the encrypted document's name was not displayed in case of minor format errors (e.g. in case of encrypted penalty documents).
- Improved handling of non latin1 characters in CDOC documents
- Improved handling of data files to avoid reading an incorrect file from the user's file system when the file name contains slash characters. 
- Fixed the translation of some buttons that in case of OSX platform appeared in English even if the chosen language was Russian or Estonian.



DigiDoc3 version 3.9.1 release notes
--------------------------------------
Changes compared to ver 3.9

Known issues:
- In case of OSX platform, some of the buttons appear in English even if the chosen language is Estonian or Russian.

Client:
- Fixed problems with DDOC and BDOC file extensions in OSX. Previously, in some cases .ddoc or .bdoc file extension was not set according to the document's format when saving the document to file system.
- Upgraded signing of DigiDoc3 Client and Crypto OSX distribution package, v2 signature is now used. 

Crypto:
- Fixed decryption of CDOC documents that were encrypted with DigiDoc Crypto version 2.7. Previously, the decryption operation did not succeed in Linux environment.
- Upgraded signing of DigiDoc3 Client and Crypto OSX distribution package, v2 signature is now used.
 
Crypto known issues:
- The temporary DDOC container that is used internally by DigiDoc3 Crypto to encapsulate the encrypted data files cannot be parsed with JDigiDoc and CDigiDoc libraries after decryption as the DDOC container's <DataFile> element's Size attribute contains the size value in kilobytes with suffix " KB" (the value should be in bytes with no suffix).



DigiDoc3 version 3.9 release notes
--------------------------------------
Changes compared to ver 3.8.1

- Implemented Kill Switch functionality that is executed if the  currently installed ID-software version is not supported or if the automated software version check has not succeeded during 12 months' period. 
	- Added restriction so that the ID-software cannot be used if the Kill Switch has been executed. Information in a pop-up window about required update of the software is displayed, the ID-software window is closed after the user clicks OK and the current software version cannot be used.
- Implemented automated ID-software version check that periodically checks from server if the currently installed ID-software version is up-to-date and officially supported.
	- Added warning message that is displayed if the software version check has not succeeded after 7 or more consecutive days. Added possibility to prevent the message from appearing consecutively. 
- Removed "Help" button from the error message pop-up window.

Client:
- Changed OCSP validity confirmation server access certificate usage for private persons. A default access certificate is installed along with the software's installation. The same default server access certificate is used in case of all private persons, the private person does not have to manage the access certificate's installation anymore.
	- Added monthly signature counter functionality, signatures that are created during one month are counted.
	- Added OCSP validity service usage conditions' confirmation to signing intro view. 
	- Added warning message that is displayed when trying to create a new signature but the monthly signature counter value is over limit.
	- If the default access certificate has expired then signing is no longer possible with the current version of the software, the software must be updated.
- Changed the OCSP server access certificate related notification messages for business users. No other changes were made for business users regarding server access certificates.
- Added support for validating BDOC signatures with time-stamps (BDOC-TS profile) via the Libdigidocpp library. 
	- Implemented changes to "Signature" tab ("Show details" view):
	- BDOC-TS signature's format is displayed as "BES/time-stamp" in the "Signature format" data field. 
	- Added button "Show TSA certificate". The Time-Stamping Authority's certificate is displayed when clicking on the button.
	- Added data fields "TSA time", "TSA time (UTC)", "TSA certificate issuer".
	- The signature creation time of BDOC-TS signature is the time-stamp's creation time (in case of a signature with time-stamp, the OCSP validity confirmation's creation time is the signing time). The value is displayed in "Signed on" field in the main window, "TSA time" field in "Signature" tab ("Show details" view), "Time" field in Validity Confirmation Sheet ("Print Summary" window).
	- Default time-stamping service is not set
- Fixed problem with extracting data files from DDOC container if the data file's name contains special characters.
- Implemented changes for using new DigiDocService web service's API during M-ID signing. The data file's mimetype value is now also set to the service.
- Added error message "Invalid phone number! Please include country code" that occurs during M-ID signing when the user has not inserted mobile number's country code or the country code is incorrect.
- Fixed error with M-ID signing in OSX. The problem occurred when the data file's name contained special characters, an erroneous signature was created as a result.
- Fixed problem with M-ID signing in OSX, added check that PKCS#11 driver is called out only when PC/SC process is running. Previously, M-ID signing was occasionally not successful and produced libdigidoc error 16 if there was no ID-card reader connected to the computer during signing.
- Fixed "Send container to e-mail" functionality. Previously, the BDOC or DDOC container was not added as an attachment to the e-mail in OSX platform.
- Changed the signed document's signing time display format in "Time" field of the Validity Confirmation Sheet (Print Summary window). The signing time is now displayed in the local time instead of UTC time.
- Changed the text that is displayed in case of signature that is valid with warnings.
- Added text "NB! WARNINGS" to the Validity Confirmation Sheet ("Print Summary" window) in case of signatures that are valid with warnings.
- Added text "NB! TEST SIGNATURE" to the Validity Confirmation Sheet ("Print Summary" window) in case of signatures that are created by using test-certificates.
- Conducted code review, removed obsolete code.

Crypto:
- Added support for efficient BDOC decryption. Decrypting CDOC document that contains a directly encrypted BDOC file (that has not been added to additional DDOC container before encryption). 
- Removed Libdigidoc library’s dependency. Added functionality that enables creating and parsing CDOC and DDOC files during encryption and decryption operations.
- Fixed encryption error in OSX. Previously, the encrypted data was not actually added to CDOC container if there was no ID-card reader connected to the computer during encryption.
- Fixed error that occurred when trying to encrypt or decrypt data file with the size of 0 bytes. Previously, the file could not be opened from the main window before encryption nor after decryption.-
- Improved recipient search settings in "Add recipient" view when searching for recipient according to company’s name or registration number. Now, SSL/TLS certificates are not displayed, only Digital Stamp certificates are shown.
- Removed "Settings" menu.



DigiDoc3 version 3.8.1 release notes
--------------------------------------
Changes compared to ver 3.8.0

Client:
- Removed the restriction of altering DDOC files (adding new signatures and removing existing signatures) with validation warning "X509IssuerName or X509IssuerSerial missing xmlns attribute"
- Improved server access certificate's import to OSX keychain so that the user is not asked about server access certificate's private key export during signature creation with DigiDoc3 Client. The server access certificates are not displayed during authentication with Safari web browser. 



DigiDoc3 version 3.8.0 release notes
--------------------------------------

- DigiDoc3 Crypto and DigiDoc3 Client are now run with a single executable file. 
- Changed the distribution of DigiDoc3 Crypto for OSX platform. DigiDoc3 Client (common application for Client and Crypto) and Utility program are now available only from Apple App Store. When using ID-card or both ID-card and Mobile-ID then the user is prompted to install an additional software package. 

Client:
- Added BDOC 2.1 document format support. Added Elliptic Curve Cryptography (ECC) based certificates support for BDOC 2.1 format.
- Added warnings system and changed the priorities of DigiDoc file's validation result statuses. See CDigiDoc and Libdigidocpp software libraries documentation for more information.
- Added support for signing with Finnish ID cards and validation of signatures that are created with Finnish live and test certificates. The certificate files have to be installed with separate packages. The live certificates package contains Finnish root CA certificate (http://fineid.fi/default.aspx?id=596) and certificates which are included in the Finnish national Trust Service List (TSL) (https://www.viestintavirasto.fi/attachments/TSL-Ficora.xml). Finnish test certificates (http://fineid.fi/default.aspx?id=597) are included in the overall test certificates package.  
- Improved the user's notification in case of altering old and not supported DigiDoc file formats (SK-XML 1.0, DIGIDOC-XML 1.1, 1.2).
- Moved signature and OCSP confirmation information to a single Signature tab (in "Show details" window), optimized the information that is displayed.
- Improved of displaying the signature creation time in case of daylight saving time.
- Added field of OCSP validity confirmation time in UTC format to Signature tab in "Show details" window.
- Changed the name of the field "Signing time" to "Signer's computer time (UTC)" in Signature tab ("Show details" window). The time is shown in UTC format.
- Fixed the problem of not showing the time of the day in the signer certificate's validity period fields in Signature tab (in "Show details" window).
- Replaced the field "Hash value of validity confirmation (OCSP response)" with "Hash value of signature" in Validity Confirmation Sheet (Print Summary view). 
- Added  "Generate certificate" button to Server Access Certificate tab (under Settings window). The button enables to generate a new server access certificate if the previous one is expired or about to expire. 
- Changed the name of the field "Hash value of issuer's public key" to "Authority key identifier" in Validity Confirmation Sheet (Print Summary view).
- Added notification to the user when trying to view Validity Confirmation Sheet if there is no printer installed in the user's system. 
- It is now allowed for a person to give more than one signature to a single DigiDoc document. Notification is displayed to the user before adding a complementary signature to a document that he/she has previously signed.
- Changed the displaying of Digital signing intro, the intro is shown to the user when signing the first document instead of running the application for the first time.
- Fixed the problem of the application not responding in specific situations when signing two documents in parallel in two DigiDoc3 Client application windows with ID-card.
- Fixed the problem in OSX that caused the application to open multiple overlapping windows when signing from context menu or opening a DigiDoc file with double click.
- Fixed the problem in Windows with using \ characters as folder separators in digidocpp.conf configuration file's OCSP server access certificate's file name (parameter "pkcs12.cert"). Now, both / and \ characters are supported as folder separators in the parameter value.
- Fixed the problem of mistakenly overwriting an existing data file with the same name when saving data files to disk and not choosing to overwrite the file.
- Fixed the problem of not being able to concurrently open two data files that have the same name but are in different DigiDoc containers.
- Fixed the problem with updating the notification "This container is signed by you" which shows if the current DigiDoc container is signed by the owner of the ID card which is inserted into card reader. 
- Fixed the problem with crash reports in OSX in case of application that was installed from Apple App Store. Improved the crash report system. 
- Started using coverity.com static analysis tool to find source code defects and vulnerabilities. Fixed the defects that were discovered.
- Optimized sending status requests to DigiDocService web service during signature creation with Mobile-ID.
- Qt framework has been updated to version 5.2 in OSX, version 5.1.1 in Windows environments, version 5.0.2 in Ubuntu 13.10, version 4.8 in Ubuntu 12.04.

- Security fixes:
- Client side verification for DigiDocService web site certificates added [while creating a TLS connection to DigiDocService website]. The missing verification step was discovered analytically. No attacks or malware are known to take advantage of the missed control.

Crypto:
- Added functionality to the Used Certificates and SK certificates tabs (in Add Recipient window), it is now possible to sort the previously used certificates list by owner, type, issuer and expiry date.
- Added functionality to search for the recipient’s certificate by company’s registry number (in Add recipient view). Can be used when searching for certificates issued to legal entities.
- Fixed the error situation which occurred when using special characters when searching for recipient’s certificate by company name.
