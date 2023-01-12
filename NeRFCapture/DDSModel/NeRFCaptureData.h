/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: NeRFCaptureData.h
  Cyclone DDS: V0.11.0

*****************************************************************/
#ifndef DDSC_NERFCAPTUREDATA_H
#define DDSC_NERFCAPTUREDATA_H

#include "dds/ddsc/dds_public_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef DDS_SEQUENCE_OCTET_DEFINED
#define DDS_SEQUENCE_OCTET_DEFINED
typedef struct dds_sequence_octet
{
  uint32_t _maximum;
  uint32_t _length;
  uint8_t *_buffer;
  bool _release;
} dds_sequence_octet;

#define dds_sequence_octet__alloc() \
((dds_sequence_octet*) dds_alloc (sizeof (dds_sequence_octet)));

#define dds_sequence_octet_allocbuf(l) \
((uint8_t *) dds_alloc ((l) * sizeof (uint8_t)))
#endif /* DDS_SEQUENCE_OCTET_DEFINED */

#ifndef DDS_SEQUENCE_OCTET_DEFINED
#define DDS_SEQUENCE_OCTET_DEFINED
typedef struct dds_sequence_octet
{
  uint32_t _maximum;
  uint32_t _length;
  uint8_t *_buffer;
  bool _release;
} dds_sequence_octet;

#define dds_sequence_octet__alloc() \
((dds_sequence_octet*) dds_alloc (sizeof (dds_sequence_octet)));

#define dds_sequence_octet_allocbuf(l) \
((uint8_t *) dds_alloc ((l) * sizeof (uint8_t)))
#endif /* DDS_SEQUENCE_OCTET_DEFINED */

typedef struct NeRFCaptureData_NeRFCaptureFrame
{
  uint32_t id;
  double timestamp;
  float fl_x;
  float fl_y;
  float cx;
  float cy;
  float transform_matrix[16];
  uint32_t width;
  uint32_t height;
  dds_sequence_octet image;
  bool has_depth;
  uint32_t depth_width;
  uint32_t depth_height;
  float depth_scale;
  dds_sequence_octet depth_image;
} NeRFCaptureData_NeRFCaptureFrame;

extern const dds_topic_descriptor_t NeRFCaptureData_NeRFCaptureFrame_desc;

#define NeRFCaptureData_NeRFCaptureFrame__alloc() \
((NeRFCaptureData_NeRFCaptureFrame*) dds_alloc (sizeof (NeRFCaptureData_NeRFCaptureFrame)));

#define NeRFCaptureData_NeRFCaptureFrame_free(d,o) \
dds_sample_free ((d), &NeRFCaptureData_NeRFCaptureFrame_desc, (o))

#ifdef __cplusplus
}
#endif

#endif /* DDSC_NERFCAPTUREDATA_H */