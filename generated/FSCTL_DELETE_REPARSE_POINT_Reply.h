/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_DELETE_REPARSE_POINT_Reply.h
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

#ifndef FSCTL_DELETE_REPARSE_POINT_Reply_H
#define FSCTL_DELETE_REPARSE_POINT_Reply_H

class FSCTL_DELETE_REPARSE_POINT_Reply
{


public:
	FSCTL_DELETE_REPARSE_POINT_Reply();
	~FSCTL_DELETE_REPARSE_POINT_Reply();

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:


protected:


};

#endif