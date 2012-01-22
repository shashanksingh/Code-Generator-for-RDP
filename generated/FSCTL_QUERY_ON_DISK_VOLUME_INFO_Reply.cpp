/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply.cpp
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

#include "FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply.h"

FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply::FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply() 
{
}

FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply::~FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply() 
{
}


qint64 FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: getDirectoryCount()
{
	return m_DirectoryCount;
}

void FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: setDirectoryCount(const qint64 & value)
{
	m_DirectoryCount = value;
}

qint64 FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: getFileCount()
{
	return m_FileCount;
}

void FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: setFileCount(const qint64 & value)
{
	m_FileCount = value;
}

qint16 FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: getFsFormatMajVersion()
{
	return m_FsFormatMajVersion;
}

void FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: setFsFormatMajVersion(const qint16 & value)
{
	m_FsFormatMajVersion = value;
}

qint16 FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: getFsFormatMinVersion()
{
	return m_FsFormatMinVersion;
}

void FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: setFsFormatMinVersion(const qint16 & value)
{
	m_FsFormatMinVersion = value;
}

QByteArray FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: getFsFormatName()
{
	return m_FsFormatName;
}

void FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: setFsFormatName(const QByteArray & value)
{
	m_FsFormatName = value;
}

quint64 FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: getFormatTime()
{
	return m_FormatTime;
}

void FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: setFormatTime(const quint64 & value)
{
	m_FormatTime = value;
}

quint64 FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: getLastUpdateTime()
{
	return m_LastUpdateTime;
}

void FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: setLastUpdateTime(const quint64 & value)
{
	m_LastUpdateTime = value;
}

QByteArray FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: getCopyrightInfo()
{
	return m_CopyrightInfo;
}

void FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: setCopyrightInfo(const QByteArray & value)
{
	m_CopyrightInfo = value;
}

QByteArray FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: getAbstractInfo()
{
	return m_AbstractInfo;
}

void FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: setAbstractInfo(const QByteArray & value)
{
	m_AbstractInfo = value;
}

QByteArray FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: getFormattingImplementationInfo()
{
	return m_FormattingImplementationInfo;
}

void FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: setFormattingImplementationInfo(const QByteArray & value)
{
	m_FormattingImplementationInfo = value;
}

QByteArray FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: getLastModifyingImplementationInfo()
{
	return m_LastModifyingImplementationInfo;
}

void FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply:: setLastModifyingImplementationInfo(const QByteArray & value)
{
	m_LastModifyingImplementationInfo = value;
}
void FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_QUERY_ON_DISK_VOLUME_INFO_Reply::getBytes() 
{
}

