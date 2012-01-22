/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_SIS_COPYFILE_Request.h
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

#ifndef FSCTL_SIS_COPYFILE_Request_H
#define FSCTL_SIS_COPYFILE_Request_H

class FSCTL_SIS_COPYFILE_Request
{


public:
	FSCTL_SIS_COPYFILE_Request();
	~FSCTL_SIS_COPYFILE_Request();

	quint32 getSourceFileNameLength();
	void setSourceFileNameLength(quint32 value );

	quint32 getDestinationFileNameLength();
	void setDestinationFileNameLength(quint32 value );

	quint32 getFlags();
	void setFlags(quint32 value );

	QByteArray getSourceFileName();
	void setSourceFileName(QByteArray value );

	QByteArray getDestinationFileName();
	void setDestinationFileName(QByteArray value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	quint32 m_SourceFileNameLength;
	quint32 m_DestinationFileNameLength;
	quint32 m_Flags;
	QByteArray m_SourceFileName;
	QByteArray m_DestinationFileName;

protected:


};

#endif