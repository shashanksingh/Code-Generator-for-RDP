/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_SET_ZERO_DATA_Reply.h
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

#ifndef FSCTL_SET_ZERO_DATA_Reply_H
#define FSCTL_SET_ZERO_DATA_Reply_H

class FSCTL_SET_ZERO_DATA_Reply
{


public:
	FSCTL_SET_ZERO_DATA_Reply();
	~FSCTL_SET_ZERO_DATA_Reply();

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:


protected:


};

#endif