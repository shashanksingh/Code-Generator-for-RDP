/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_RECALL_FILE_Reply.h
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

#ifndef FSCTL_RECALL_FILE_Reply_H
#define FSCTL_RECALL_FILE_Reply_H

class FSCTL_RECALL_FILE_Reply
{


public:
	FSCTL_RECALL_FILE_Reply();
	~FSCTL_RECALL_FILE_Reply();

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:


protected:


};

#endif