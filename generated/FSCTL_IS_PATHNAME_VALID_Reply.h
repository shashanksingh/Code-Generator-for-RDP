/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_IS_PATHNAME_VALID_Reply.h
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

#ifndef FSCTL_IS_PATHNAME_VALID_Reply_H
#define FSCTL_IS_PATHNAME_VALID_Reply_H

class FSCTL_IS_PATHNAME_VALID_Reply
{


public:
	FSCTL_IS_PATHNAME_VALID_Reply();
	~FSCTL_IS_PATHNAME_VALID_Reply();

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:


protected:


};

#endif