/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB2.h
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

#ifndef FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB2_H
#define FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB2_H

class FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB2
{


public:
	FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB2();
	~FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB2();

	quint64 getTargetFileObject();
	void setTargetFileObject(quint64 value );

	quint32 getTargetLinkTrackingInformationLength();
	void setTargetLinkTrackingInformationLength(quint32 value );

	QByteArray getTargetLinkTrackingInformationBuffer();
	void setTargetLinkTrackingInformationBuffer(QByteArray value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	quint64 m_TargetFileObject;
	quint32 m_TargetLinkTrackingInformationLength;
	QByteArray m_TargetLinkTrackingInformationBuffer;

protected:


};

#endif