/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_PIPE_TRANSCEIVE_Reply.h
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

#ifndef FSCTL_PIPE_TRANSCEIVE_Reply_H
#define FSCTL_PIPE_TRANSCEIVE_Reply_H

class FSCTL_PIPE_TRANSCEIVE_Reply
{


public:
	FSCTL_PIPE_TRANSCEIVE_Reply();
	~FSCTL_PIPE_TRANSCEIVE_Reply();

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:


protected:


};

#endif