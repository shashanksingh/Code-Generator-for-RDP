/*
 * =====================================================================================
 *
 *       Filename:  TARGET_LINK_TRACKING_INFORMATION_Buffer_2.h
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

#ifndef TARGET_LINK_TRACKING_INFORMATION_Buffer_2_H
#define TARGET_LINK_TRACKING_INFORMATION_Buffer_2_H

class TARGET_LINK_TRACKING_INFORMATION_Buffer_2
{


public:
	TARGET_LINK_TRACKING_INFORMATION_Buffer_2();
	~TARGET_LINK_TRACKING_INFORMATION_Buffer_2();

	quint32 getType();
	void setType(quint32 value );

	quint16 getVolumeId();
	void setVolumeId(quint16 value );

	quint16 getObjectId();
	void setObjectId(quint16 value );

	QByteArray getNetBIOSName();
	void setNetBIOSName(QByteArray value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	quint32 m_Type;
	quint16 m_VolumeId;
	quint16 m_ObjectId;
	QByteArray m_NetBIOSName;

protected:


};

#endif