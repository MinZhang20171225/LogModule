#ifndef CPUBTOOLS_H
#define CPUBTOOLS_H

/*@brief:����������װ
 *
 *@attenti:�����������Ϊ���̰߳�ȫ������ע�����ر�˵��
 */

#include <vector>
#include <string>
#include <sys/time.h>
#include <stdlib.h>

class CPubTools
{
public:
    CPubTools();
    ~CPubTools();

    ///@brief: ��Ŀ���ַ��� ����s���зָ� cmdnum��ʾ��ȡǰ���ٸ��ָ�
    static int split(char s, std::string& delim, std::vector< std::string >& ret, int cmdnum=-1);

    ///@brief:��stringת����ʮ��������ʽ��ÿ���ַ��Կո����
    ///@param: reslenת����Ľ������
    ///@attention:�ڴ��ͷţ������ɸú�������
    ///ex:"01234"  ->"4849505152"
    static void str2hexstring(const unsigned char* src, int srclen, std::string& dstlen);

    ///@brief:�ж�ʱ���ַ���YYYYMMDDHHmmSS�Ƿ�Ϸ�,���꣬2��������
    ///@return ture �Ϸ� false �Ƿ�
    static bool vertify_time(const std::string timestr);

    ///@brief:�ж�һ���ַ����Ƿ�Ϊ����
    static bool check_number(const char* numstr, int len);

    ///@brief:��ȡ��ǰʱ���ַ��� ��ʽex��2015-10-10 09:00:00
    static std::string get_timestr();
};



#endif // CPUBTOOLS_H
