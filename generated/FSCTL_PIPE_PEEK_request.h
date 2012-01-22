/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_PIPE_PEEK_request.h
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

#ifndef FSCTL_PIPE_PEEK_request_H
#define FSCTL_PIPE_PEEK_request_H

class FSCTL_PIPE_PEEK_request
{


public:
	FSCTL_PIPE_PEEK_request();
	~FSCTL_PIPE_PEEK_request();

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:


protected:


};

#endif