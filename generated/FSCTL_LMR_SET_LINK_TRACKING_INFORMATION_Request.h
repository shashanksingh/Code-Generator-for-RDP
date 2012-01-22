/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request.h
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

#ifndef FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_H
#define FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_H

class FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request
{


public:
	FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request();
	~FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request();

	QByteArray getTargetLinkTrackingInformationBuffer();
	void setTargetLinkTrackingInformationBuffer(QByteArray value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	QByteArray m_TargetLinkTrackingInformationBuffer;

protected:


};

#endif