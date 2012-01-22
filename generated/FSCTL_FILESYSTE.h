/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_FILESYSTE.h
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

#ifndef FSCTL_FILESYSTE_H
#define FSCTL_FILESYSTE_H

class FSCTL_FILESYSTE
public:

	GET_STATISTICS_Request get{();
	void set{(GET_STATISTICS_Request value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	GET_STATISTICS_Request m_{;

protected:


};

#endif