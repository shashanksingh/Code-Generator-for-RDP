/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_SIS_COPYFILE_Reply.h
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

#ifndef FSCTL_SIS_COPYFILE_Reply_H
#define FSCTL_SIS_COPYFILE_Reply_H

class FSCTL_SIS_COPYFILE_Reply
{


public:
	FSCTL_SIS_COPYFILE_Reply();
	~FSCTL_SIS_COPYFILE_Reply();

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:


protected:


};

#endif