/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_WRITE_USN_CLOSE_RECORD_Reply.h
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

#ifndef FSCTL_WRITE_USN_CLOSE_RECORD_Reply_H
#define FSCTL_WRITE_USN_CLOSE_RECORD_Reply_H

class FSCTL_WRITE_USN_CLOSE_RECORD_Reply
{


public:
	FSCTL_WRITE_USN_CLOSE_RECORD_Reply();
	~FSCTL_WRITE_USN_CLOSE_RECORD_Reply();

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:


protected:


};

#endif