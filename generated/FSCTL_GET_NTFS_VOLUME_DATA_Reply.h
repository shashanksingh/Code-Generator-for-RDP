/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_GET_NTFS_VOLUME_DATA_Reply.h
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

#ifndef FSCTL_GET_NTFS_VOLUME_DATA_Reply_H
#define FSCTL_GET_NTFS_VOLUME_DATA_Reply_H

class FSCTL_GET_NTFS_VOLUME_DATA_Reply
{


public:
	FSCTL_GET_NTFS_VOLUME_DATA_Reply();
	~FSCTL_GET_NTFS_VOLUME_DATA_Reply();

	qint64 getVolumeSerialNumber();
	void setVolumeSerialNumber(qint64 value );

	qint64 getNumberSectors();
	void setNumberSectors(qint64 value );

	qint64 getTotalClusters();
	void setTotalClusters(qint64 value );

	qint64 getFreeClusters();
	void setFreeClusters(qint64 value );

	qint64 getTotalReserved();
	void setTotalReserved(qint64 value );

	quint32 getBytesPerSector();
	void setBytesPerSector(quint32 value );

	quint32 getBytesPerCluster();
	void setBytesPerCluster(quint32 value );

	quint32 getBytesPerFileRecordSegment();
	void setBytesPerFileRecordSegment(quint32 value );

	quint32 getClustersPerFileRecordSegment();
	void setClustersPerFileRecordSegment(quint32 value );

	qint64 getMftValidDataLength();
	void setMftValidDataLength(qint64 value );

	qint64 getMftStartLcn();
	void setMftStartLcn(qint64 value );

	qint64 getMft2StartLcn();
	void setMft2StartLcn(qint64 value );

	qint64 getMftZoneStart();
	void setMftZoneStart(qint64 value );

	qint64 getMftZoneEnd();
	void setMftZoneEnd(qint64 value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	qint64 m_VolumeSerialNumber;
	qint64 m_NumberSectors;
	qint64 m_TotalClusters;
	qint64 m_FreeClusters;
	qint64 m_TotalReserved;
	quint32 m_BytesPerSector;
	quint32 m_BytesPerCluster;
	quint32 m_BytesPerFileRecordSegment;
	quint32 m_ClustersPerFileRecordSegment;
	qint64 m_MftValidDataLength;
	qint64 m_MftStartLcn;
	qint64 m_Mft2StartLcn;
	qint64 m_MftZoneStart;
	qint64 m_MftZoneEnd;

protected:


};

#endif