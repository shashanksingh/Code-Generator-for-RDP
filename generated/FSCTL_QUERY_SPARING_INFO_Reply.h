/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_QUERY_SPARING_INFO_Reply.h
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

#ifndef FSCTL_QUERY_SPARING_INFO_Reply_H
#define FSCTL_QUERY_SPARING_INFO_Reply_H

class FSCTL_QUERY_SPARING_INFO_Reply
{


public:
	FSCTL_QUERY_SPARING_INFO_Reply();
	~FSCTL_QUERY_SPARING_INFO_Reply();

	quint32 getSparingUnitBytes();
	void setSparingUnitBytes(quint32 value );

	quint8 getSoftwareSparing();
	void setSoftwareSparing(quint8 value );

	QByteArray getReserved();
	void setReserved(QByteArray value );

	quint32 getTotalSpareBlocks();
	void setTotalSpareBlocks(quint32 value );

	quint32 getFreeSpareBlocks();
	void setFreeSpareBlocks(quint32 value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	quint32 m_SparingUnitBytes;
	quint8 m_SoftwareSparing;
	QByteArray m_Reserved;
	quint32 m_TotalSpareBlocks;
	quint32 m_FreeSpareBlocks;

protected:


};

#endif