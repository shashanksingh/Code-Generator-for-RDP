/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_GET_COMPRESSION_Reply.h
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

#ifndef FSCTL_GET_COMPRESSION_Reply_H
#define FSCTL_GET_COMPRESSION_Reply_H

class FSCTL_GET_COMPRESSION_Reply
{


public:
	FSCTL_GET_COMPRESSION_Reply();
	~FSCTL_GET_COMPRESSION_Reply();

	quint16 getCompressionState();
	void setCompressionState(quint16 value );

	QByteArray getBytes();
	void parse(const QByteArray & packet);
private:

	quint16 m_CompressionState;

protected:


};

#endif