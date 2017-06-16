// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Video Intelligence API (videointelligence/v1beta1)
// Description:
//   Google Cloud Video Intelligence API.
// Documentation:
//   https://cloud.google.com/video-intelligence/docs/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1LabelAnnotation;
@class GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1LabelLocation;
@class GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoAnnotationProgress;
@class GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoAnnotationResults;
@class GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoContext;
@class GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoSegment;
@class GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1LabelAnnotation;
@class GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1LabelLocation;
@class GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1SafeSearchAnnotation;
@class GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1VideoAnnotationProgress;
@class GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1VideoAnnotationResults;
@class GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1VideoSegment;
@class GTLRCloudVideoIntelligence_GoogleLongrunningOperation_Metadata;
@class GTLRCloudVideoIntelligence_GoogleLongrunningOperation_Response;
@class GTLRCloudVideoIntelligence_GoogleRpcStatus;
@class GTLRCloudVideoIntelligence_GoogleRpcStatus_Details_Item;

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1AnnotateVideoRequest.features

/** Value: "FEATURE_UNSPECIFIED" */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1AnnotateVideoRequest_Features_FeatureUnspecified;
/** Value: "LABEL_DETECTION" */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1AnnotateVideoRequest_Features_LabelDetection;
/** Value: "SHOT_CHANGE_DETECTION" */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1AnnotateVideoRequest_Features_ShotChangeDetection;

// ----------------------------------------------------------------------------
// GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1LabelLocation.level

/**
 *  Frame-level. Corresponds to a single video frame.
 *
 *  Value: "FRAME_LEVEL"
 */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1LabelLocation_Level_FrameLevel;
/**
 *  Unspecified.
 *
 *  Value: "LABEL_LEVEL_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1LabelLocation_Level_LabelLevelUnspecified;
/**
 *  Segment-level. Corresponds to one of `AnnotateSpec.segments`.
 *
 *  Value: "SEGMENT_LEVEL"
 */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1LabelLocation_Level_SegmentLevel;
/**
 *  Shot-level. Corresponds to a single shot (i.e. a series of frames
 *  without a major camera position or background change).
 *
 *  Value: "SHOT_LEVEL"
 */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1LabelLocation_Level_ShotLevel;
/**
 *  Video-level. Corresponds to the whole video.
 *
 *  Value: "VIDEO_LEVEL"
 */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1LabelLocation_Level_VideoLevel;

// ----------------------------------------------------------------------------
// GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoContext.labelDetectionMode

/**
 *  Detect frame-level labels.
 *
 *  Value: "FRAME_MODE"
 */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoContext_LabelDetectionMode_FrameMode;
/**
 *  Unspecified.
 *
 *  Value: "LABEL_DETECTION_MODE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoContext_LabelDetectionMode_LabelDetectionModeUnspecified;
/**
 *  Detect both shot-level and frame-level labels.
 *
 *  Value: "SHOT_AND_FRAME_MODE"
 */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoContext_LabelDetectionMode_ShotAndFrameMode;
/**
 *  Detect shot-level labels.
 *
 *  Value: "SHOT_MODE"
 */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoContext_LabelDetectionMode_ShotMode;

// ----------------------------------------------------------------------------
// GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1LabelLocation.level

/**
 *  Frame-level. Corresponds to a single video frame.
 *
 *  Value: "FRAME_LEVEL"
 */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1LabelLocation_Level_FrameLevel;
/**
 *  Unspecified.
 *
 *  Value: "LABEL_LEVEL_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1LabelLocation_Level_LabelLevelUnspecified;
/**
 *  Segment-level. Corresponds to one of `AnnotateSpec.segments`.
 *
 *  Value: "SEGMENT_LEVEL"
 */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1LabelLocation_Level_SegmentLevel;
/**
 *  Shot-level. Corresponds to a single shot (i.e. a series of frames
 *  without a major camera position or background change).
 *
 *  Value: "SHOT_LEVEL"
 */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1LabelLocation_Level_ShotLevel;
/**
 *  Video-level. Corresponds to the whole video.
 *
 *  Value: "VIDEO_LEVEL"
 */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1LabelLocation_Level_VideoLevel;

// ----------------------------------------------------------------------------
// GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1SafeSearchAnnotation.adult

/**
 *  Likely.
 *
 *  Value: "LIKELY"
 */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1SafeSearchAnnotation_Adult_Likely;
/**
 *  Possible.
 *
 *  Value: "POSSIBLE"
 */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1SafeSearchAnnotation_Adult_Possible;
/**
 *  Unknown likelihood.
 *
 *  Value: "UNKNOWN"
 */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1SafeSearchAnnotation_Adult_Unknown;
/**
 *  Unlikely.
 *
 *  Value: "UNLIKELY"
 */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1SafeSearchAnnotation_Adult_Unlikely;
/**
 *  Very likely.
 *
 *  Value: "VERY_LIKELY"
 */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1SafeSearchAnnotation_Adult_VeryLikely;
/**
 *  Very unlikely.
 *
 *  Value: "VERY_UNLIKELY"
 */
GTLR_EXTERN NSString * const kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1SafeSearchAnnotation_Adult_VeryUnlikely;

/**
 *  Video annotation progress. Included in the `metadata`
 *  field of the `Operation` returned by the `GetOperation`
 *  call of the `google::longrunning::Operations` service.
 */
@interface GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1AnnotateVideoProgress : GTLRObject

/** Progress metadata for all videos specified in `AnnotateVideoRequest`. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1VideoAnnotationProgress *> *annotationProgress;

@end


/**
 *  Video annotation response. Included in the `response`
 *  field of the `Operation` returned by the `GetOperation`
 *  call of the `google::longrunning::Operations` service.
 */
@interface GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1AnnotateVideoResponse : GTLRObject

/** Annotation results for all videos specified in `AnnotateVideoRequest`. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1VideoAnnotationResults *> *annotationResults;

@end


/**
 *  Video annotation progress. Included in the `metadata`
 *  field of the `Operation` returned by the `GetOperation`
 *  call of the `google::longrunning::Operations` service.
 */
@interface GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1AnnotateVideoProgress : GTLRObject

/** Progress metadata for all videos specified in `AnnotateVideoRequest`. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoAnnotationProgress *> *annotationProgress;

@end


/**
 *  Video annotation request.
 */
@interface GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1AnnotateVideoRequest : GTLRObject

/** Requested video annotation features. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *features;

/**
 *  The video data bytes. Encoding: base64. If unset, the input video(s)
 *  should be specified via `input_uri`. If set, `input_uri` should be unset.
 */
@property(nonatomic, copy, nullable) NSString *inputContent;

/**
 *  Input video location. Currently, only
 *  [Google Cloud Storage](https://cloud.google.com/storage/) URIs are
 *  supported, which must be specified in the following format:
 *  `gs://bucket-id/object-id` (other URI formats return
 *  google.rpc.Code.INVALID_ARGUMENT). For more information, see
 *  [Request URIs](/storage/docs/reference-uris).
 *  A video URI may include wildcards in `object-id`, and thus identify
 *  multiple videos. Supported wildcards: '*' to match 0 or more characters;
 *  '?' to match 1 character. If unset, the input video should be embedded
 *  in the request as `input_content`. If set, `input_content` should be unset.
 */
@property(nonatomic, copy, nullable) NSString *inputUri;

/**
 *  Optional cloud region where annotation should take place. Supported cloud
 *  regions: `us-east1`, `us-west1`, `europe-west1`, `asia-east1`. If no region
 *  is specified, a region will be determined based on video file location.
 */
@property(nonatomic, copy, nullable) NSString *locationId;

/**
 *  Optional location where the output (in JSON format) should be stored.
 *  Currently, only [Google Cloud Storage](https://cloud.google.com/storage/)
 *  URIs are supported, which must be specified in the following format:
 *  `gs://bucket-id/object-id` (other URI formats return
 *  google.rpc.Code.INVALID_ARGUMENT). For more information, see
 *  [Request URIs](/storage/docs/reference-uris).
 */
@property(nonatomic, copy, nullable) NSString *outputUri;

/** Additional video context and/or feature-specific parameters. */
@property(nonatomic, strong, nullable) GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoContext *videoContext;

@end


/**
 *  Video annotation response. Included in the `response`
 *  field of the `Operation` returned by the `GetOperation`
 *  call of the `google::longrunning::Operations` service.
 */
@interface GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1AnnotateVideoResponse : GTLRObject

/** Annotation results for all videos specified in `AnnotateVideoRequest`. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoAnnotationResults *> *annotationResults;

@end


/**
 *  Label annotation.
 */
@interface GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1LabelAnnotation : GTLRObject

/**
 *  Textual description, e.g. `Fixed-gear bicycle`.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/** Language code for `description` in BCP-47 format. */
@property(nonatomic, copy, nullable) NSString *languageCode;

/** Where the label was detected and with what confidence. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1LabelLocation *> *locations;

@end


/**
 *  Label location.
 */
@interface GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1LabelLocation : GTLRObject

/**
 *  Confidence that the label is accurate. Range: [0, 1].
 *
 *  Uses NSNumber of floatValue.
 */
@property(nonatomic, strong, nullable) NSNumber *confidence;

/**
 *  Label level.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1LabelLocation_Level_FrameLevel
 *        Frame-level. Corresponds to a single video frame. (Value:
 *        "FRAME_LEVEL")
 *    @arg @c kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1LabelLocation_Level_LabelLevelUnspecified
 *        Unspecified. (Value: "LABEL_LEVEL_UNSPECIFIED")
 *    @arg @c kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1LabelLocation_Level_SegmentLevel
 *        Segment-level. Corresponds to one of `AnnotateSpec.segments`. (Value:
 *        "SEGMENT_LEVEL")
 *    @arg @c kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1LabelLocation_Level_ShotLevel
 *        Shot-level. Corresponds to a single shot (i.e. a series of frames
 *        without a major camera position or background change). (Value:
 *        "SHOT_LEVEL")
 *    @arg @c kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1LabelLocation_Level_VideoLevel
 *        Video-level. Corresponds to the whole video. (Value: "VIDEO_LEVEL")
 */
@property(nonatomic, copy, nullable) NSString *level;

/**
 *  Video segment. Set to [-1, -1] for video-level labels.
 *  Set to [timestamp, timestamp] for frame-level labels.
 *  Otherwise, corresponds to one of `AnnotateSpec.segments`
 *  (if specified) or to shot boundaries (if requested).
 */
@property(nonatomic, strong, nullable) GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoSegment *segment;

@end


/**
 *  Annotation progress for a single video.
 */
@interface GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoAnnotationProgress : GTLRObject

/**
 *  Video file location in
 *  [Google Cloud Storage](https://cloud.google.com/storage/).
 */
@property(nonatomic, copy, nullable) NSString *inputUri;

/**
 *  Approximate percentage processed thus far.
 *  Guaranteed to be 100 when fully processed.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *progressPercent;

/** Time when the request was received. */
@property(nonatomic, strong, nullable) GTLRDateTime *startTime;

/** Time of the most recent update. */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

@end


/**
 *  Annotation results for a single video.
 */
@interface GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoAnnotationResults : GTLRObject

/**
 *  If set, indicates an error. Note that for a single `AnnotateVideoRequest`
 *  some videos may succeed and some may fail.
 */
@property(nonatomic, strong, nullable) GTLRCloudVideoIntelligence_GoogleRpcStatus *error;

/**
 *  Video file location in
 *  [Google Cloud Storage](https://cloud.google.com/storage/).
 */
@property(nonatomic, copy, nullable) NSString *inputUri;

/** Label annotations. There is exactly one element for each unique label. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1LabelAnnotation *> *labelAnnotations;

/** Shot annotations. Each shot is represented as a video segment. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoSegment *> *shotAnnotations;

@end


/**
 *  Video context and/or feature-specific parameters.
 */
@interface GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoContext : GTLRObject

/**
 *  If label detection has been requested, what labels should be detected
 *  in addition to video-level labels or segment-level labels. If unspecified,
 *  defaults to `SHOT_MODE`.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoContext_LabelDetectionMode_FrameMode
 *        Detect frame-level labels. (Value: "FRAME_MODE")
 *    @arg @c kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoContext_LabelDetectionMode_LabelDetectionModeUnspecified
 *        Unspecified. (Value: "LABEL_DETECTION_MODE_UNSPECIFIED")
 *    @arg @c kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoContext_LabelDetectionMode_ShotAndFrameMode
 *        Detect both shot-level and frame-level labels. (Value:
 *        "SHOT_AND_FRAME_MODE")
 *    @arg @c kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoContext_LabelDetectionMode_ShotMode
 *        Detect shot-level labels. (Value: "SHOT_MODE")
 */
@property(nonatomic, copy, nullable) NSString *labelDetectionMode;

/**
 *  Model to use for label detection.
 *  Supported values: "latest" and "stable" (the default).
 */
@property(nonatomic, copy, nullable) NSString *labelDetectionModel;

/**
 *  Video segments to annotate. The segments may overlap and are not required
 *  to be contiguous or span the whole video. If unspecified, each video
 *  is treated as a single segment.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoSegment *> *segments;

/**
 *  Model to use for shot change detection.
 *  Supported values: "latest" and "stable" (the default).
 */
@property(nonatomic, copy, nullable) NSString *shotChangeDetectionModel;

@end


/**
 *  Video segment.
 */
@interface GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1beta1VideoSegment : GTLRObject

/**
 *  End offset in microseconds (inclusive). Unset means 0.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *endTimeOffset;

/**
 *  Start offset in microseconds (inclusive). Unset means 0.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *startTimeOffset;

@end


/**
 *  Label annotation.
 */
@interface GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1LabelAnnotation : GTLRObject

/**
 *  Textual description, e.g. `Fixed-gear bicycle`.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/** Language code for `description` in BCP-47 format. */
@property(nonatomic, copy, nullable) NSString *languageCode;

/** Where the label was detected and with what confidence. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1LabelLocation *> *locations;

@end


/**
 *  Label location.
 */
@interface GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1LabelLocation : GTLRObject

/**
 *  Confidence that the label is accurate. Range: [0, 1].
 *
 *  Uses NSNumber of floatValue.
 */
@property(nonatomic, strong, nullable) NSNumber *confidence;

/**
 *  Label level.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1LabelLocation_Level_FrameLevel
 *        Frame-level. Corresponds to a single video frame. (Value:
 *        "FRAME_LEVEL")
 *    @arg @c kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1LabelLocation_Level_LabelLevelUnspecified
 *        Unspecified. (Value: "LABEL_LEVEL_UNSPECIFIED")
 *    @arg @c kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1LabelLocation_Level_SegmentLevel
 *        Segment-level. Corresponds to one of `AnnotateSpec.segments`. (Value:
 *        "SEGMENT_LEVEL")
 *    @arg @c kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1LabelLocation_Level_ShotLevel
 *        Shot-level. Corresponds to a single shot (i.e. a series of frames
 *        without a major camera position or background change). (Value:
 *        "SHOT_LEVEL")
 *    @arg @c kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1LabelLocation_Level_VideoLevel
 *        Video-level. Corresponds to the whole video. (Value: "VIDEO_LEVEL")
 */
@property(nonatomic, copy, nullable) NSString *level;

/**
 *  Video segment. Unset for video-level labels.
 *  Set to a frame timestamp for frame-level labels.
 *  Otherwise, corresponds to one of `AnnotateSpec.segments`
 *  (if specified) or to shot boundaries (if requested).
 */
@property(nonatomic, strong, nullable) GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1VideoSegment *segment;

@end


/**
 *  Safe search annotation (based on per-frame visual signals only).
 *  If no unsafe content has been detected in a frame, no annotations
 *  are present for that frame.
 */
@interface GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1SafeSearchAnnotation : GTLRObject

/**
 *  Likelihood of adult content.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1SafeSearchAnnotation_Adult_Likely
 *        Likely. (Value: "LIKELY")
 *    @arg @c kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1SafeSearchAnnotation_Adult_Possible
 *        Possible. (Value: "POSSIBLE")
 *    @arg @c kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1SafeSearchAnnotation_Adult_Unknown
 *        Unknown likelihood. (Value: "UNKNOWN")
 *    @arg @c kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1SafeSearchAnnotation_Adult_Unlikely
 *        Unlikely. (Value: "UNLIKELY")
 *    @arg @c kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1SafeSearchAnnotation_Adult_VeryLikely
 *        Very likely. (Value: "VERY_LIKELY")
 *    @arg @c kGTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1SafeSearchAnnotation_Adult_VeryUnlikely
 *        Very unlikely. (Value: "VERY_UNLIKELY")
 */
@property(nonatomic, copy, nullable) NSString *adult;

/**
 *  Time-offset, relative to the beginning of the video,
 *  corresponding to the video frame for this annotation.
 */
@property(nonatomic, strong, nullable) GTLRDuration *time;

@end


/**
 *  Annotation progress for a single video.
 */
@interface GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1VideoAnnotationProgress : GTLRObject

/**
 *  Video file location in
 *  [Google Cloud Storage](https://cloud.google.com/storage/).
 */
@property(nonatomic, copy, nullable) NSString *inputUri;

/**
 *  Approximate percentage processed thus far.
 *  Guaranteed to be 100 when fully processed.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *progressPercent;

/** Time when the request was received. */
@property(nonatomic, strong, nullable) GTLRDateTime *startTime;

/** Time of the most recent update. */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

@end


/**
 *  Annotation results for a single video.
 */
@interface GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1VideoAnnotationResults : GTLRObject

/**
 *  If set, indicates an error. Note that for a single `AnnotateVideoRequest`
 *  some videos may succeed and some may fail.
 */
@property(nonatomic, strong, nullable) GTLRCloudVideoIntelligence_GoogleRpcStatus *error;

/**
 *  Video file location in
 *  [Google Cloud Storage](https://cloud.google.com/storage/).
 */
@property(nonatomic, copy, nullable) NSString *inputUri;

/** Label annotations. There is exactly one element for each unique label. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1LabelAnnotation *> *labelAnnotations;

/** Safe search annotations. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1SafeSearchAnnotation *> *safeSearchAnnotations;

/** Shot annotations. Each shot is represented as a video segment. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1VideoSegment *> *shotAnnotations;

@end


/**
 *  Video segment.
 */
@interface GTLRCloudVideoIntelligence_GoogleCloudVideointelligenceV1VideoSegment : GTLRObject

/**
 *  Time-offset, relative to the beginning of the video,
 *  corresponding to the end of the segment (inclusive).
 */
@property(nonatomic, strong, nullable) GTLRDuration *endTime;

/**
 *  Time-offset, relative to the beginning of the video,
 *  corresponding to the start of the segment (inclusive).
 */
@property(nonatomic, strong, nullable) GTLRDuration *startTime;

@end


/**
 *  This resource represents a long-running operation that is the result of a
 *  network API call.
 */
@interface GTLRCloudVideoIntelligence_GoogleLongrunningOperation : GTLRObject

/**
 *  If the value is `false`, it means the operation is still in progress.
 *  If true, the operation is completed, and either `error` or `response` is
 *  available.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/** The error result of the operation in case of failure or cancellation. */
@property(nonatomic, strong, nullable) GTLRCloudVideoIntelligence_GoogleRpcStatus *error;

/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 */
@property(nonatomic, strong, nullable) GTLRCloudVideoIntelligence_GoogleLongrunningOperation_Metadata *metadata;

/**
 *  The server-assigned name, which is only unique within the same service that
 *  originally returns it. If you use the default HTTP mapping, the
 *  `name` should have the format of `operations/some/unique/name`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 */
@property(nonatomic, strong, nullable) GTLRCloudVideoIntelligence_GoogleLongrunningOperation_Response *response;

@end


/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudVideoIntelligence_GoogleLongrunningOperation_Metadata : GTLRObject
@end


/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudVideoIntelligence_GoogleLongrunningOperation_Response : GTLRObject
@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different
 *  programming environments, including REST APIs and RPC APIs. It is used by
 *  [gRPC](https://github.com/grpc). The error model is designed to be:
 *  - Simple to use and understand for most users
 *  - Flexible enough to meet unexpected needs
 *  # Overview
 *  The `Status` message contains three pieces of data: error code, error
 *  message,
 *  and error details. The error code should be an enum value of
 *  google.rpc.Code, but it may accept additional error codes if needed. The
 *  error message should be a developer-facing English message that helps
 *  developers *understand* and *resolve* the error. If a localized user-facing
 *  error message is needed, put the localized message in the error details or
 *  localize it in the client. The optional error details may contain arbitrary
 *  information about the error. There is a predefined set of error detail types
 *  in the package `google.rpc` that can be used for common error conditions.
 *  # Language mapping
 *  The `Status` message is the logical representation of the error model, but
 *  it
 *  is not necessarily the actual wire format. When the `Status` message is
 *  exposed in different client libraries and different wire protocols, it can
 *  be
 *  mapped differently. For example, it will likely be mapped to some exceptions
 *  in Java, but more likely mapped to some error codes in C.
 *  # Other uses
 *  The error model and the `Status` message can be used in a variety of
 *  environments, either with or without APIs, to provide a
 *  consistent developer experience across different environments.
 *  Example uses of this error model include:
 *  - Partial errors. If a service needs to return partial errors to the client,
 *  it may embed the `Status` in the normal response to indicate the partial
 *  errors.
 *  - Workflow errors. A typical workflow has multiple steps. Each step may
 *  have a `Status` message for error reporting.
 *  - Batch operations. If a client uses batch request and batch response, the
 *  `Status` message should be used directly inside batch response, one for
 *  each error sub-response.
 *  - Asynchronous operations. If an API call embeds asynchronous operation
 *  results in its response, the status of those operations should be
 *  represented directly using the `Status` message.
 *  - Logging. If some API errors are stored in logs, the message `Status` could
 *  be used directly after any stripping needed for security/privacy reasons.
 */
@interface GTLRCloudVideoIntelligence_GoogleRpcStatus : GTLRObject

/**
 *  The status code, which should be an enum value of google.rpc.Code.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *code;

/**
 *  A list of messages that carry the error details. There will be a
 *  common set of message types for APIs to use.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudVideoIntelligence_GoogleRpcStatus_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRCloudVideoIntelligence_GoogleRpcStatus_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudVideoIntelligence_GoogleRpcStatus_Details_Item : GTLRObject
@end

NS_ASSUME_NONNULL_END
