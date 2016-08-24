/*
 * 日志辅助函数
 * @author 刘健 59208859@qq.com
*/

#include <easycpp/helpers/log.h>

/// 输出错误日志
void easycpp::helpers::log_error(std::string tag, std::string msg)
{
    std::string data = easycpp::helpers::datetime()+ " | ERROR | " + tag + " | " + msg;
    easycpp::helpers::file_put_contents("error.log", data, FILE_APPEND);
    std::cout << data << std::endl;
}

/// 输出调试日志
void easycpp::helpers::log_debug(std::string tag, std::string msg)
{
    std::string data = easycpp::helpers::datetime() + " | DEBUG | " + tag + " | " + msg;
    easycpp::helpers::file_put_contents("debug.log", data, FILE_APPEND);
    std::cout << data << std::endl;
}

/// 输出信息日志
void easycpp::helpers::log_info(std::string tag, std::string msg)
{
    std::string data = easycpp::helpers::datetime() + " | INFO | " + tag + " | " + msg;
    easycpp::helpers::file_put_contents("info.log", data, FILE_APPEND);
    std::cout << data << std::endl;
}
