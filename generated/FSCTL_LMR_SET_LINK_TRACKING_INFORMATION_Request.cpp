/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request.cpp
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

#include "FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request.h"

FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request::FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request() 
{
}

FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request::~FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request() 
{
}


QByteArray FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request:: getTargetLinkTrackingInformationBuffer()
{
	return m_TargetLinkTrackingInformationBuffer;
}

void FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request:: setTargetLinkTrackingInformationBuffer(const QByteArray & value)
{
	m_TargetLinkTrackingInformationBuffer = value;
}
void FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_LMR_SET_LINK_TRACKING_INFORMATION_Request::getBytes() 
{
}

