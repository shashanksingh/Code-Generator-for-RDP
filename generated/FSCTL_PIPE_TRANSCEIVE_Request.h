/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_PIPE_TRANSCEIVE_Request.h
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

#ifndef FSCTL_PIPE_TRANSCEIVE_Request_H
#define FSCTL_PIPE_TRANSCEIVE_Request_H

class FSCTL_PIPE_TRANSCEIVE_Request
{


public:
	FSCTL_PIPE_TRANSCEIVE_Request();
	~FSCTL_PIPE_TRANSCEIVE_Request();

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:


protected:


};

#endif