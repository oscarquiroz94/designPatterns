#include "MessagePublisher.hpp"
#include "DeviceSmartphone.hpp"
#include "DeviceComputer.hpp"
#include "DeviceSmarwatch.hpp"

int main()
{
    MessagePublisher reporter;
    DeviceSmartphone smartphone;
    DeviceSmartwatch smartwatch;
    DeviceComputer   computer;

    reporter.attach(&smartphone);
    reporter.attach(&smartwatch);
    reporter.attach(&computer);

    reporter.create_message("saludos");

    reporter.detach(&computer);

    reporter.create_message("saludos otra vez");

    return 0;
}