/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB.h
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

#ifndef FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB_H
#define FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB_H

class FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB
{


public:
	FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB();
	~FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB();

	quint32 getTargetFileObject();
	void setTargetFileObject(quint32 value );

	quint32 getTargetLinkTrackingInformationLength();
	void setTargetLinkTrackingInformationLength(quint32 value );

	QByteArray getTargetLinkTrackingInformationBuffer();
	void setTargetLinkTrackingInformationBuffer(QByteArray value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	quint32 m_TargetFileObject;
	quint32 m_TargetLinkTrackingInformationLength;
	QByteArray m_TargetLinkTrackingInformationBuffer;

protected:


};

#endif