/*
 *@brief:��ȫ���в���ģ�壬���ڲ���ϵͳΪ�߳�ʱ��Ƭ�����õ����أ��ڽ����ܼ�Ͷ������ʱ��
 * ���齫���д�С���óɽϴ�
 */

#include <iostream>
#include <sys/time.h>
#include <pthread.h>
#include <vector>
#include "Log.h"

#define LOG_RUN     0   //������־
#define LOG_COUNT   1   //�Ʒ���־
#define LOG_TEST    2   //����״̬��־

int main(void)
{
    std::vector<std::string> namevec;
    namevec.push_back("run.txt");
    namevec.push_back("../run/count.txt");
    namevec.push_back("error.txt");
    CLog::instance()->init(LOG_DEBUG, namevec);

    CLog* m_log = CLog::instance();
    std::string str = "hello, this is a test.";

    while (1)
    {
        m_log->write_log(LOG_RUN, LOG_INFO, "hello %d", 5);
        m_log->write_log(LOG_COUNT, LOG_INFO, "hehe");
        m_log->write_log(LOG_TEST, LOG_INFO, str.c_str());

        char data[] = "00000000111111112222222233333333444444445555555566666666";
        m_log->write_data(LOG_RUN, LOG_INFO, data, sizeof(data));
        usleep(100);
        //m_log->write_data(LOG_COUNT, LOG_INFO, "hehe");
        //m_log->write_data(LOG_TEST, LOG_INFO, str.c_str());
    }

    while (1)
    {
        sleep(1);
    }
    return 0;
}
