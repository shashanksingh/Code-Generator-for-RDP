/*
 * =====================================================================================
 *
 *       Filename:  TARGET_LINK_TRACKING_INFORMATION_Buffer_1.cpp
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

#include "TARGET_LINK_TRACKING_INFORMATION_Buffer_1.h"

TARGET_LINK_TRACKING_INFORMATION_Buffer_1::TARGET_LINK_TRACKING_INFORMATION_Buffer_1() 
{
}

TARGET_LINK_TRACKING_INFORMATION_Buffer_1::~TARGET_LINK_TRACKING_INFORMATION_Buffer_1() 
{
}


QByteArray TARGET_LINK_TRACKING_INFORMATION_Buffer_1:: getNetBIOSName()
{
	return m_NetBIOSName;
}

void TARGET_LINK_TRACKING_INFORMATION_Buffer_1:: setNetBIOSName(const QByteArray & value)
{
	m_NetBIOSName = value;
}
void TARGET_LINK_TRACKING_INFORMATION_Buffer_1::parse(const QByteArray & packet) 
{
}

QByteArray TARGET_LINK_TRACKING_INFORMATION_Buffer_1::getBytes() 
{
}

