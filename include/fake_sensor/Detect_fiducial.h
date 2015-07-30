// Generated by gencpp from file fake_sensor/Detect_fiducial.msg
// DO NOT EDIT!


#ifndef FAKE_SENSOR_MESSAGE_DETECT_FIDUCIAL_H
#define FAKE_SENSOR_MESSAGE_DETECT_FIDUCIAL_H

#include <ros/service_traits.h>


#include <fake_sensor/Detect_fiducialRequest.h>
#include <fake_sensor/Detect_fiducialResponse.h>


namespace fake_sensor
{

struct Detect_fiducial
{

typedef Detect_fiducialRequest Request;
typedef Detect_fiducialResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Detect_fiducial
} // namespace fake_sensor


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::fake_sensor::Detect_fiducial > {
  static const char* value()
  {
    return "850ccada049e5c8fdf273ce36ed58bbf";
  }

  static const char* value(const ::fake_sensor::Detect_fiducial&) { return value(); }
};

template<>
struct DataType< ::fake_sensor::Detect_fiducial > {
  static const char* value()
  {
    return "fake_sensor/Detect_fiducial";
  }

  static const char* value(const ::fake_sensor::Detect_fiducial&) { return value(); }
};


// service_traits::MD5Sum< ::fake_sensor::Detect_fiducialRequest> should match 
// service_traits::MD5Sum< ::fake_sensor::Detect_fiducial > 
template<>
struct MD5Sum< ::fake_sensor::Detect_fiducialRequest>
{
  static const char* value()
  {
    return MD5Sum< ::fake_sensor::Detect_fiducial >::value();
  }
  static const char* value(const ::fake_sensor::Detect_fiducialRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::fake_sensor::Detect_fiducialRequest> should match 
// service_traits::DataType< ::fake_sensor::Detect_fiducial > 
template<>
struct DataType< ::fake_sensor::Detect_fiducialRequest>
{
  static const char* value()
  {
    return DataType< ::fake_sensor::Detect_fiducial >::value();
  }
  static const char* value(const ::fake_sensor::Detect_fiducialRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::fake_sensor::Detect_fiducialResponse> should match 
// service_traits::MD5Sum< ::fake_sensor::Detect_fiducial > 
template<>
struct MD5Sum< ::fake_sensor::Detect_fiducialResponse>
{
  static const char* value()
  {
    return MD5Sum< ::fake_sensor::Detect_fiducial >::value();
  }
  static const char* value(const ::fake_sensor::Detect_fiducialResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::fake_sensor::Detect_fiducialResponse> should match 
// service_traits::DataType< ::fake_sensor::Detect_fiducial > 
template<>
struct DataType< ::fake_sensor::Detect_fiducialResponse>
{
  static const char* value()
  {
    return DataType< ::fake_sensor::Detect_fiducial >::value();
  }
  static const char* value(const ::fake_sensor::Detect_fiducialResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // FAKE_SENSOR_MESSAGE_DETECT_FIDUCIAL_H
