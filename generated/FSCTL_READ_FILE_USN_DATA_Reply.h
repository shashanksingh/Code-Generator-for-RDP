/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_READ_FILE_USN_DATA_Reply.h
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

#ifndef FSCTL_READ_FILE_USN_DATA_Reply_H
#define FSCTL_READ_FILE_USN_DATA_Reply_H

class FSCTL_READ_FILE_USN_DATA_Reply
{


public:
	FSCTL_READ_FILE_USN_DATA_Reply();
	~FSCTL_READ_FILE_USN_DATA_Reply();

	quint32 getRecordLength();
	void setRecordLength(quint32 value );

	quint16 getMajorVersion();
	void setMajorVersion(quint16 value );

	quint16 getMinorVersion();
	void setMinorVersion(quint16 value );

	quint64 getFileReferenceNumber();
	void setFileReferenceNumber(quint64 value );

	quint64 getParentFileReferenceNumber();
	void setParentFileReferenceNumber(quint64 value );

	qint64 getUsn();
	void setUsn(qint64 value );

	quint64 getTimeStamp();
	void setTimeStamp(quint64 value );

	quint32 getReason();
	void setReason(quint32 value );

	quint32 getSourceInfo();
	void setSourceInfo(quint32 value );

	quint32 getSecurityId();
	void setSecurityId(quint32 value );

	quint32 getFileAttributes();
	void setFileAttributes(quint32 value );

	quint16 getFileNameLength();
	void setFileNameLength(quint16 value );

	quint16 getFileNameOffset();
	void setFileNameOffset(quint16 value );

	QByteArray getFileName();
	void setFileName(QByteArray value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	quint32 m_RecordLength;
	quint16 m_MajorVersion;
	quint16 m_MinorVersion;
	quint64 m_FileReferenceNumber;
	quint64 m_ParentFileReferenceNumber;
	qint64 m_Usn;
	quint64 m_TimeStamp;
	quint32 m_Reason;
	quint32 m_SourceInfo;
	quint32 m_SecurityId;
	quint32 m_FileAttributes;
	quint16 m_FileNameLength;
	quint16 m_FileNameOffset;
	QByteArray m_FileName;

protected:


};

#endif