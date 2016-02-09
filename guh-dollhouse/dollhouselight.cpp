#include "dollhouselight.h"

DollhouseLight::DollhouseLight(QObject *parent) : QObject(parent)
{

}

QString DollhouseLight::name() const
{
    return m_name;
}

void DollhouseLight::setName(const QString &name)
{
    m_name = name;
}

QString DollhouseLight::connectionUuid() const
{
    return m_connectionUuid;
}

void DollhouseLight::setConnectionUuid(const QString &connectionUuid)
{
    m_connectionUuid = connectionUuid;
}

QString DollhouseLight::hostAddress() const
{
    return m_hostAddress;
}

void DollhouseLight::setHostAddress(const QString &address)
{
    m_hostAddress = address;
}

int DollhouseLight::lightId() const
{
    return m_lightId;
}

void DollhouseLight::setLightId(const int &lightId)
{
    m_lightId = lightId;
}

QColor DollhouseLight::color() const
{
    return m_color;
}

void DollhouseLight::setColor(const QColor &color)
{
    m_color = color;
}

bool DollhouseLight::power() const
{
    return m_power;
}

void DollhouseLight::setPower(const bool &power)
{
    m_power = power;
}

