#ifndef CUSTOMEXCEPTION_H
#define CUSTOMEXCEPTION_H

#include <exception>
#include <QString>

class CustomException : public std::exception
{
    QString message;
public:
    CustomException(QString message);
    void throwException();
    const char *what() const noexcept override;
};

#endif // CUSTOMEXCEPTION_H
