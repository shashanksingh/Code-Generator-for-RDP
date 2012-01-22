/*
 * =====================================================================================
 *
 *       Filename:  TARGET_LINK_TRACKING_INFORMATION_Buffer_2.cpp
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

#include "TARGET_LINK_TRACKING_INFORMATION_Buffer_2.h"

TARGET_LINK_TRACKING_INFORMATION_Buffer_2::TARGET_LINK_TRACKING_INFORMATION_Buffer_2() 
{
}

TARGET_LINK_TRACKING_INFORMATION_Buffer_2::~TARGET_LINK_TRACKING_INFORMATION_Buffer_2() 
{
}


quint32 TARGET_LINK_TRACKING_INFORMATION_Buffer_2:: getType()
{
	return m_Type;
}

void TARGET_LINK_TRACKING_INFORMATION_Buffer_2:: setType(const quint32 & value)
{
	m_Type = value;
}

quint16 TARGET_LINK_TRACKING_INFORMATION_Buffer_2:: getVolumeId()
{
	return m_VolumeId;
}

void TARGET_LINK_TRACKING_INFORMATION_Buffer_2:: setVolumeId(const quint16 & value)
{
	m_VolumeId = value;
}

quint16 TARGET_LINK_TRACKING_INFORMATION_Buffer_2:: getObjectId()
{
	return m_ObjectId;
}

void TARGET_LINK_TRACKING_INFORMATION_Buffer_2:: setObjectId(const quint16 & value)
{
	m_ObjectId = value;
}

QByteArray TARGET_LINK_TRACKING_INFORMATION_Buffer_2:: getNetBIOSName()
{
	return m_NetBIOSName;
}

void TARGET_LINK_TRACKING_INFORMATION_Buffer_2:: setNetBIOSName(const QByteArray & value)
{
	m_NetBIOSName = value;
}
void TARGET_LINK_TRACKING_INFORMATION_Buffer_2::parse(const QByteArray & packet) 
{
}

QByteArray TARGET_LINK_TRACKING_INFORMATION_Buffer_2::getBytes() 
{
}

