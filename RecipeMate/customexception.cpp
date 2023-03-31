#include "customexception.h"


CustomException::CustomException(QString message)
    :
      message(message){}

const char *CustomException::what() const noexcept
{
    return message.toStdString().c_str();
}

void throwException()
{
    throw CustomException(":)");
}
