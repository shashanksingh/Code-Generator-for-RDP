/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_GET_REPARSE_POINT_Reply.h
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

#ifndef FSCTL_GET_REPARSE_POINT_Reply_H
#define FSCTL_GET_REPARSE_POINT_Reply_H

class FSCTL_GET_REPARSE_POINT_Reply
{


public:
	FSCTL_GET_REPARSE_POINT_Reply();
	~FSCTL_GET_REPARSE_POINT_Reply();

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:


protected:


};

#endif