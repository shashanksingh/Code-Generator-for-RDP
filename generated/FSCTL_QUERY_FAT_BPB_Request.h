/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_QUERY_FAT_BPB_Request.h
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

#ifndef FSCTL_QUERY_FAT_BPB_Request_H
#define FSCTL_QUERY_FAT_BPB_Request_H

class FSCTL_QUERY_FAT_BPB_Request
{


public:
	FSCTL_QUERY_FAT_BPB_Request();
	~FSCTL_QUERY_FAT_BPB_Request();

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:


protected:


};

#endif