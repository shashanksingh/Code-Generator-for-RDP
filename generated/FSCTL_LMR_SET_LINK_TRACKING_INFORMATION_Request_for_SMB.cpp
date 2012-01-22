/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB.cpp
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

#include "FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB.h"

FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB::FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB() 
{
}

FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB::~FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB() 
{
}


quint32 FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB:: getTargetFileObject()
{
	return m_TargetFileObject;
}

void FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB:: setTargetFileObject(const quint32 & value)
{
	m_TargetFileObject = value;
}

quint32 FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB:: getTargetLinkTrackingInformationLength()
{
	return m_TargetLinkTrackingInformationLength;
}

void FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB:: setTargetLinkTrackingInformationLength(const quint32 & value)
{
	m_TargetLinkTrackingInformationLength = value;
}

QByteArray FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB:: getTargetLinkTrackingInformationBuffer()
{
	return m_TargetLinkTrackingInformationBuffer;
}

void FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB:: setTargetLinkTrackingInformationBuffer(const QByteArray & value)
{
	m_TargetLinkTrackingInformationBuffer = value;
}
void FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB::getBytes() 
{
}

