/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_FIND_FILES_BY_SID_Reply.h
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

#ifndef FSCTL_FIND_FILES_BY_SID_Reply_H
#define FSCTL_FIND_FILES_BY_SID_Reply_H

class FSCTL_FIND_FILES_BY_SID_Reply
{


public:
	FSCTL_FIND_FILES_BY_SID_Reply();
	~FSCTL_FIND_FILES_BY_SID_Reply();

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:


protected:


};

#endif