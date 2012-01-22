/*
 * =====================================================================================
 *
 *       Filename:  TARGET_LINK_TRACKING_INFORMATION_Buffer_1.h
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

#ifndef TARGET_LINK_TRACKING_INFORMATION_Buffer_1_H
#define TARGET_LINK_TRACKING_INFORMATION_Buffer_1_H

class TARGET_LINK_TRACKING_INFORMATION_Buffer_1
{


public:
	TARGET_LINK_TRACKING_INFORMATION_Buffer_1();
	~TARGET_LINK_TRACKING_INFORMATION_Buffer_1();

	QByteArray getNetBIOSName();
	void setNetBIOSName(QByteArray value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	QByteArray m_NetBIOSName;

protected:


};

#endif