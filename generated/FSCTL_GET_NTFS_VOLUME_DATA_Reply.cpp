/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_GET_NTFS_VOLUME_DATA_Reply.cpp
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

#include "FSCTL_GET_NTFS_VOLUME_DATA_Reply.h"

FSCTL_GET_NTFS_VOLUME_DATA_Reply::FSCTL_GET_NTFS_VOLUME_DATA_Reply() 
{
}

FSCTL_GET_NTFS_VOLUME_DATA_Reply::~FSCTL_GET_NTFS_VOLUME_DATA_Reply() 
{
}


qint64 FSCTL_GET_NTFS_VOLUME_DATA_Reply:: getVolumeSerialNumber()
{
	return m_VolumeSerialNumber;
}

void FSCTL_GET_NTFS_VOLUME_DATA_Reply:: setVolumeSerialNumber(const qint64 & value)
{
	m_VolumeSerialNumber = value;
}

qint64 FSCTL_GET_NTFS_VOLUME_DATA_Reply:: getNumberSectors()
{
	return m_NumberSectors;
}

void FSCTL_GET_NTFS_VOLUME_DATA_Reply:: setNumberSectors(const qint64 & value)
{
	m_NumberSectors = value;
}

qint64 FSCTL_GET_NTFS_VOLUME_DATA_Reply:: getTotalClusters()
{
	return m_TotalClusters;
}

void FSCTL_GET_NTFS_VOLUME_DATA_Reply:: setTotalClusters(const qint64 & value)
{
	m_TotalClusters = value;
}

qint64 FSCTL_GET_NTFS_VOLUME_DATA_Reply:: getFreeClusters()
{
	return m_FreeClusters;
}

void FSCTL_GET_NTFS_VOLUME_DATA_Reply:: setFreeClusters(const qint64 & value)
{
	m_FreeClusters = value;
}

qint64 FSCTL_GET_NTFS_VOLUME_DATA_Reply:: getTotalReserved()
{
	return m_TotalReserved;
}

void FSCTL_GET_NTFS_VOLUME_DATA_Reply:: setTotalReserved(const qint64 & value)
{
	m_TotalReserved = value;
}

quint32 FSCTL_GET_NTFS_VOLUME_DATA_Reply:: getBytesPerSector()
{
	return m_BytesPerSector;
}

void FSCTL_GET_NTFS_VOLUME_DATA_Reply:: setBytesPerSector(const quint32 & value)
{
	m_BytesPerSector = value;
}

quint32 FSCTL_GET_NTFS_VOLUME_DATA_Reply:: getBytesPerCluster()
{
	return m_BytesPerCluster;
}

void FSCTL_GET_NTFS_VOLUME_DATA_Reply:: setBytesPerCluster(const quint32 & value)
{
	m_BytesPerCluster = value;
}

quint32 FSCTL_GET_NTFS_VOLUME_DATA_Reply:: getBytesPerFileRecordSegment()
{
	return m_BytesPerFileRecordSegment;
}

void FSCTL_GET_NTFS_VOLUME_DATA_Reply:: setBytesPerFileRecordSegment(const quint32 & value)
{
	m_BytesPerFileRecordSegment = value;
}

quint32 FSCTL_GET_NTFS_VOLUME_DATA_Reply:: getClustersPerFileRecordSegment()
{
	return m_ClustersPerFileRecordSegment;
}

void FSCTL_GET_NTFS_VOLUME_DATA_Reply:: setClustersPerFileRecordSegment(const quint32 & value)
{
	m_ClustersPerFileRecordSegment = value;
}

qint64 FSCTL_GET_NTFS_VOLUME_DATA_Reply:: getMftValidDataLength()
{
	return m_MftValidDataLength;
}

void FSCTL_GET_NTFS_VOLUME_DATA_Reply:: setMftValidDataLength(const qint64 & value)
{
	m_MftValidDataLength = value;
}

qint64 FSCTL_GET_NTFS_VOLUME_DATA_Reply:: getMftStartLcn()
{
	return m_MftStartLcn;
}

void FSCTL_GET_NTFS_VOLUME_DATA_Reply:: setMftStartLcn(const qint64 & value)
{
	m_MftStartLcn = value;
}

qint64 FSCTL_GET_NTFS_VOLUME_DATA_Reply:: getMft2StartLcn()
{
	return m_Mft2StartLcn;
}

void FSCTL_GET_NTFS_VOLUME_DATA_Reply:: setMft2StartLcn(const qint64 & value)
{
	m_Mft2StartLcn = value;
}

qint64 FSCTL_GET_NTFS_VOLUME_DATA_Reply:: getMftZoneStart()
{
	return m_MftZoneStart;
}

void FSCTL_GET_NTFS_VOLUME_DATA_Reply:: setMftZoneStart(const qint64 & value)
{
	m_MftZoneStart = value;
}

qint64 FSCTL_GET_NTFS_VOLUME_DATA_Reply:: getMftZoneEnd()
{
	return m_MftZoneEnd;
}

void FSCTL_GET_NTFS_VOLUME_DATA_Reply:: setMftZoneEnd(const qint64 & value)
{
	m_MftZoneEnd = value;
}
void FSCTL_GET_NTFS_VOLUME_DATA_Reply::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_GET_NTFS_VOLUME_DATA_Reply::getBytes() 
{
}

