/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_PIPE_PEEK_Reply.cpp
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

#include "FSCTL_PIPE_PEEK_Reply.h"

FSCTL_PIPE_PEEK_Reply::FSCTL_PIPE_PEEK_Reply() 
{
}

FSCTL_PIPE_PEEK_Reply::~FSCTL_PIPE_PEEK_Reply() 
{
}


quint32 FSCTL_PIPE_PEEK_Reply:: getNamedPipeState()
{
	return m_NamedPipeState;
}

void FSCTL_PIPE_PEEK_Reply:: setNamedPipeState(const quint32 & value)
{
	m_NamedPipeState = value;
}

quint32 FSCTL_PIPE_PEEK_Reply:: getReadDataAvailable()
{
	return m_ReadDataAvailable;
}

void FSCTL_PIPE_PEEK_Reply:: setReadDataAvailable(const quint32 & value)
{
	m_ReadDataAvailable = value;
}

quint32 FSCTL_PIPE_PEEK_Reply:: getNumberOfMessages()
{
	return m_NumberOfMessages;
}

void FSCTL_PIPE_PEEK_Reply:: setNumberOfMessages(const quint32 & value)
{
	m_NumberOfMessages = value;
}

quint32 FSCTL_PIPE_PEEK_Reply:: getMessageLength()
{
	return m_MessageLength;
}

void FSCTL_PIPE_PEEK_Reply:: setMessageLength(const quint32 & value)
{
	m_MessageLength = value;
}

QByteArray FSCTL_PIPE_PEEK_Reply:: getData()
{
	return m_Data;
}

void FSCTL_PIPE_PEEK_Reply:: setData(const QByteArray & value)
{
	m_Data = value;
}
void FSCTL_PIPE_PEEK_Reply::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_PIPE_PEEK_Reply::getBytes() 
{
}

