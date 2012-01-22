/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB2.cpp
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

#include "FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB2.h"

FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB2::FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB2() 
{
}

FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB2::~FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB2() 
{
}


quint64 FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB2:: getTargetFileObject()
{
	return m_TargetFileObject;
}

void FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB2:: setTargetFileObject(const quint64 & value)
{
	m_TargetFileObject = value;
}

quint32 FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB2:: getTargetLinkTrackingInformationLength()
{
	return m_TargetLinkTrackingInformationLength;
}

void FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB2:: setTargetLinkTrackingInformationLength(const quint32 & value)
{
	m_TargetLinkTrackingInformationLength = value;
}

QByteArray FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB2:: getTargetLinkTrackingInformationBuffer()
{
	return m_TargetLinkTrackingInformationBuffer;
}

void FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB2:: setTargetLinkTrackingInformationBuffer(const QByteArray & value)
{
	m_TargetLinkTrackingInformationBuffer = value;
}
void FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB2::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request_for_SMB2::getBytes() 
{
}

