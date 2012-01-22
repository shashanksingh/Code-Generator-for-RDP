/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply.h
 *
 *        Version:  1.0
 *        Created:  25/06/2011 06:54:53 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:
 *        Company:  Devon IT
 *
 * =====================================================================================
 */

#ifndef FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply_H
#define FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply_H

class FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply
{


public:
	FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply();
	~FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply();

	qint64 getDirectoryCount();
	void setDirectoryCount(qint64 value );

	qint64 getFileCount();
	void setFileCount(qint64 value );

	qint16 getFsFormatMajVersion();
	void setFsFormatMajVersion(qint16 value );

	qint16 getFsFormatMinVersion();
	void setFsFormatMinVersion(qint16 value );

	QByteArray getFsFormatName();
	void setFsFormatName(QByteArray value );

	quint64 getFormatTime();
	void setFormatTime(quint64 value );

	quint64 getLastUpdateTime();
	void setLastUpdateTime(quint64 value );

	QByteArray getCopyrightInfo();
	void setCopyrightInfo(QByteArray value );

	QByteArray getAbstractInfo();
	void setAbstractInfo(QByteArray value );

	QByteArray getFormattingImplementationInfo();
	void setFormattingImplementationInfo(QByteArray value );

	QByteArray getLastModifyingImplementationInfo();
	void setLastModifyingImplementationInfo(QByteArray value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	qint64 m_DirectoryCount;
	qint64 m_FileCount;
	qint16 m_FsFormatMajVersion;
	qint16 m_FsFormatMinVersion;
	QByteArray m_FsFormatName;
	quint64 m_FormatTime;
	quint64 m_LastUpdateTime;
	QByteArray m_CopyrightInfo;
	QByteArray m_AbstractInfo;
	QByteArray m_FormattingImplementationInfo;
	QByteArray m_LastModifyingImplementationInfo;

protected:


};

#endif