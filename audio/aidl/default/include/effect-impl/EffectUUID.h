/*
 * Copyright (C) 2022 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once
#include <map>

#include <aidl/android/media/audio/common/AudioUuid.h>

namespace aidl::android::hardware::audio::effect {

using ::aidl::android::media::audio::common::AudioUuid;

// ec7178ec-e5e1-4432-a3f4-4657e6795210
static const AudioUuid kEffectNullUuid = {static_cast<int32_t>(0xec7178ec),
                                          0xe5e1,
                                          0x4432,
                                          0xa3f4,
                                          {0x46, 0x57, 0xe6, 0x79, 0x52, 0x10}};
// Zero UUID
static const AudioUuid kEffectZeroUuid = {
        static_cast<int32_t>(0x0), 0x0, 0x0, 0x0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0}};

// 7b491460-8d4d-11e0-bd61-0002a5d5c51b.
static const AudioUuid kAcousticEchoCancelerTypeUUID = {static_cast<int32_t>(0x7b491460),
                                                        0x8d4d,
                                                        0x11e0,
                                                        0xbd61,
                                                        {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};
// bb392ec0-8d4d-11e0-a896-0002a5d5c51b
static const AudioUuid kAcousticEchoCancelerSwImplUUID = {static_cast<int32_t>(0xbb392ec0),
                                                          0x8d4d,
                                                          0x11e0,
                                                          0xa896,
                                                          {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};
// 0xae3c653b-be18-4ab8-8938-418f0a7f06ac
static const AudioUuid kAutomaticGainControlTypeUUID = {static_cast<int32_t>(0xae3c653b),
                                                        0xbe18,
                                                        0x4ab8,
                                                        0x8938,
                                                        {0x41, 0x8f, 0x0a, 0x7f, 0x06, 0xac}};
// 89f38e65-d4d2-4d64-ad0e-2b3e799ea886
static const AudioUuid kAutomaticGainControlSwImplUUID = {static_cast<int32_t>(0x89f38e65),
                                                          0xd4d2,
                                                          0x4d64,
                                                          0xad0e,
                                                          {0x2b, 0x3e, 0x79, 0x9e, 0xa8, 0x86}};
// 0634f220-ddd4-11db-a0fc-0002a5d5c51b
static const AudioUuid kBassBoostTypeUUID = {static_cast<int32_t>(0x0634f220),
                                             0xddd4,
                                             0x11db,
                                             0xa0fc,
                                             {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};
// fa8181f2-588b-11ed-9b6a-0242ac120002
static const AudioUuid kBassBoostSwImplUUID = {static_cast<int32_t>(0xfa8181f2),
                                               0x588b,
                                               0x11ed,
                                               0x9b6a,
                                               {0x02, 0x42, 0xac, 0x12, 0x00, 0x02}};
// 8631f300-72e2-11df-b57e-0002a5d5c51b
static const AudioUuid kBassBoostBundleImplUUID = {static_cast<int32_t>(0x8631f300),
                                                   0x72e2,
                                                   0x11df,
                                                   0xb57e,
                                                   {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};
// 14804144-a5ee-4d24-aa88-0002a5d5c51b
static const AudioUuid kBassBoostProxyUUID = {static_cast<int32_t>(0x14804144),
                                              0xa5ee,
                                              0x4d24,
                                              0xaa88,
                                              {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};
// 381e49cc-a858-4aa2-87f6-e8388e7601b2
static const AudioUuid kDownmixTypeUUID = {static_cast<int32_t>(0x381e49cc),
                                           0xa858,
                                           0x4aa2,
                                           0x87f6,
                                           {0xe8, 0x38, 0x8e, 0x76, 0x01, 0xb2}};
// fa8187ba-588b-11ed-9b6a-0242ac120002
static const AudioUuid kDownmixSwImplUUID = {static_cast<int32_t>(0xfa8187ba),
                                             0x588b,
                                             0x11ed,
                                             0x9b6a,
                                             {0x02, 0x42, 0xac, 0x12, 0x00, 0x02}};
// 93f04452-e4fe-41cc-91f9-e475b6d1d69f
static const AudioUuid kDownmixImplUUID = {static_cast<int32_t>(0x93f04452),
                                           0xe4fe,
                                           0x41cc,
                                           0x91f9,
                                           {0xe4, 0x75, 0xb6, 0xd1, 0xd6, 0x9f}};
// 0bed4300-ddd6-11db-8f34-0002a5d5c51b.
static const AudioUuid kEqualizerTypeUUID = {static_cast<int32_t>(0x0bed4300),
                                             0xddd6,
                                             0x11db,
                                             0x8f34,
                                             {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};
// 0bed4300-847d-11df-bb17-0002a5d5c51b
static const AudioUuid kEqualizerSwImplUUID = {static_cast<int32_t>(0x0bed4300),
                                               0x847d,
                                               0x11df,
                                               0xbb17,
                                               {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};
// ce772f20-847d-11df-bb17-0002a5d5c51b
static const AudioUuid kEqualizerBundleImplUUID = {static_cast<int32_t>(0xce772f20),
                                                   0x847d,
                                                   0x11df,
                                                   0xbb17,
                                                   {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};
// c8e70ecd-48ca-456e-8a4f-0002a5d5c51b
static const AudioUuid kEqualizerProxyUUID = {static_cast<int32_t>(0xc8e70ecd),
                                              0x48ca,
                                              0x456e,
                                              0x8a4f,
                                              {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};
// 7261676f-6d75-7369-6364-28e2fd3ac39e
static const AudioUuid kDynamicsProcessingTypeUUID = {static_cast<int32_t>(0x7261676f),
                                                      0x6d75,
                                                      0x7369,
                                                      0x6364,
                                                      {0x28, 0xe2, 0xfd, 0x3a, 0xc3, 0x9e}};
// fa818d78-588b-11ed-9b6a-0242ac120002
static const AudioUuid kDynamicsProcessingSwImplUUID = {static_cast<int32_t>(0xfa818d78),
                                                        0x588b,
                                                        0x11ed,
                                                        0x9b6a,
                                                        {0x02, 0x42, 0xac, 0x12, 0x00, 0x02}};
// e0e6539b-1781-7261-676f-6d7573696340
static const AudioUuid kDynamicsProcessingImplUUID = {static_cast<int32_t>(0xe0e6539b),
                                                      0x1781,
                                                      0x7261,
                                                      0x676f,
                                                      {0x6d, 0x75, 0x73, 0x69, 0x63, 0x40}};
// 1411e6d6-aecd-4021-a1cf-a6aceb0d71e5
static const AudioUuid kHapticGeneratorTypeUUID = {static_cast<int32_t>(0x1411e6d6),
                                                   0xaecd,
                                                   0x4021,
                                                   0xa1cf,
                                                   {0xa6, 0xac, 0xeb, 0x0d, 0x71, 0xe5}};
// fa819110-588b-11ed-9b6a-0242ac120002
static const AudioUuid kHapticGeneratorSwImplUUID = {static_cast<int32_t>(0xfa819110),
                                                     0x588b,
                                                     0x11ed,
                                                     0x9b6a,
                                                     {0x02, 0x42, 0xac, 0x12, 0x00, 0x02}};
// 97c4acd1-8b82-4f2f-832e-c2fe5d7a9931
static const AudioUuid kHapticGeneratorImplUUID = {static_cast<int32_t>(0x97c4acd1),
                                                   0x8b82,
                                                   0x4f2f,
                                                   0x832e,
                                                   {0xc2, 0xfe, 0x5d, 0x7a, 0x99, 0x31}};
// fe3199be-aed0-413f-87bb-11260eb63cf1
static const AudioUuid kLoudnessEnhancerTypeUUID = {static_cast<int32_t>(0xfe3199be),
                                                    0xaed0,
                                                    0x413f,
                                                    0x87bb,
                                                    {0x11, 0x26, 0x0e, 0xb6, 0x3c, 0xf1}};
// fa819610-588b-11ed-9b6a-0242ac120002
static const AudioUuid kLoudnessEnhancerSwImplUUID = {static_cast<int32_t>(0xfa819610),
                                                      0x588b,
                                                      0x11ed,
                                                      0x9b6a,
                                                      {0x02, 0x42, 0xac, 0x12, 0x00, 0x02}};
// fa415329-2034-4bea-b5dc-5b381c8d1e2c
static const AudioUuid kLoudnessEnhancerImplUUID = {static_cast<int32_t>(0xfa415329),
                                                    0x2034,
                                                    0x4bea,
                                                    0xb5dc,
                                                    {0x5b, 0x38, 0x1c, 0x8d, 0x1e, 0x2c}};
// c2e5d5f0-94bd-4763-9cac-4e234d06839e
static const AudioUuid kEnvReverbTypeUUID = {static_cast<int32_t>(0xc2e5d5f0),
                                             0x94bd,
                                             0x4763,
                                             0x9cac,
                                             {0x4e, 0x23, 0x4d, 0x06, 0x83, 0x9e}};
// fa819886-588b-11ed-9b6a-0242ac120002
static const AudioUuid kEnvReverbSwImplUUID = {static_cast<int32_t>(0xfa819886),
                                               0x588b,
                                               0x11ed,
                                               0x9b6a,
                                               {0x02, 0x42, 0xac, 0x12, 0x00, 0x02}};
// 4a387fc0-8ab3-11df-8bad-0002a5d5c51b
static const AudioUuid kAuxEnvReverbImplUUID = {static_cast<int32_t>(0x4a387fc0),
                                                0x8ab3,
                                                0x11df,
                                                0x8bad,
                                                {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};
// c7a511a0-a3bb-11df-860e-0002a5d5c51b
static const AudioUuid kInsertEnvReverbImplUUID = {static_cast<int32_t>(0xc7a511a0),
                                                   0xa3bb,
                                                   0x11df,
                                                   0x860e,
                                                   {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};
// 58b4b260-8e06-11e0-aa8e-0002a5d5c51b
static const AudioUuid kNoiseSuppressionTypeUUID = {static_cast<int32_t>(0x58b4b260),
                                                    0x8e06,
                                                    0x11e0,
                                                    0xaa8e,
                                                    {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};
// c06c8400-8e06-11e0-9cb6-0002a5d5c51b
static const AudioUuid kNoiseSuppressionSwImplUUID = {static_cast<int32_t>(0xc06c8400),
                                                      0x8e06,
                                                      0x11e0,
                                                      0x9cb6,
                                                      {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};
// 47382d60-ddd8-11db-bf3a-0002a5d5c51b
static const AudioUuid kPresetReverbTypeUUID = {static_cast<int32_t>(0x47382d60),
                                                0xddd8,
                                                0x11db,
                                                0xbf3a,
                                                {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};
// fa8199c6-588b-11ed-9b6a-0242ac120002
static const AudioUuid kPresetReverbSwImplUUID = {static_cast<int32_t>(0xfa8199c6),
                                                  0x588b,
                                                  0x11ed,
                                                  0x9b6a,
                                                  {0x02, 0x42, 0xac, 0x12, 0x00, 0x02}};
// f29a1400-a3bb-11df-8ddc-0002a5d5c51b
static const AudioUuid kAuxPresetReverbImplUUID = {static_cast<int32_t>(0xf29a1400),
                                                   0xa3bb,
                                                   0x11df,
                                                   0x8ddc,
                                                   {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};
// 172cdf00-a3bc-11df-a72f-0002a5d5c51b
static const AudioUuid kInsertPresetReverbImplUUID = {static_cast<int32_t>(0x172cdf00),
                                                      0xa3bc,
                                                      0x11df,
                                                      0xa72f,
                                                      {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};
// 37cc2c00-dddd-11db-8577-0002a5d5c51b
static const AudioUuid kVirtualizerTypeUUID = {static_cast<int32_t>(0x37cc2c00),
                                               0xdddd,
                                               0x11db,
                                               0x8577,
                                               {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};
// fa819d86-588b-11ed-9b6a-0242ac120002
static const AudioUuid kVirtualizerSwImplUUID = {static_cast<int32_t>(0xfa819d86),
                                                 0x588b,
                                                 0x11ed,
                                                 0x9b6a,
                                                 {0x02, 0x42, 0xac, 0x12, 0x00, 0x02}};
// 1d4033c0-8557-11df-9f2d-0002a5d5c51b
static const AudioUuid kVirtualizerBundleImplUUID = {static_cast<int32_t>(0x1d4033c0),
                                                     0x8557,
                                                     0x11df,
                                                     0x9f2d,
                                                     {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};
// d3467faa-acc7-4d34-acaf-0002a5d5c51b
static const AudioUuid kVirtualizerProxyUUID = {static_cast<int32_t>(0xd3467faa),
                                                0xacc7,
                                                0x4d34,
                                                0xacaf,
                                                {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};
// fa819f3e-588b-11ed-9b6a-0242ac120002
static const AudioUuid kVisualizerTypeUUID = {static_cast<int32_t>(0xfa819f3e),
                                              0x588b,
                                              0x11ed,
                                              0x9b6a,
                                              {0x02, 0x42, 0xac, 0x12, 0x00, 0x02}};
// fa81a0f6-588b-11ed-9b6a-0242ac120002
static const AudioUuid kVisualizerSwImplUUID = {static_cast<int32_t>(0xfa81a0f6),
                                                0x588b,
                                                0x11ed,
                                                0x9b6a,
                                                {0x02, 0x42, 0xac, 0x12, 0x00, 0x02}};
// d069d9e0-8329-11df-9168-0002a5d5c51b
// {0xd069d9e0, 0x8329, 0x11df, 0x9168, {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}},
static const AudioUuid kVisualizerImplUUID = {static_cast<int32_t>(0xd069d9e0),
                                              0x8329,
                                              0x11df,
                                              0x9168,
                                              {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};
// fa81a2b8-588b-11ed-9b6a-0242ac120002
static const AudioUuid kVolumeTypeUUID = {static_cast<int32_t>(0xfa81a2b8),
                                          0x588b,
                                          0x11ed,
                                          0x9b6a,
                                          {0x02, 0x42, 0xac, 0x12, 0x00, 0x02}};
// fa81a718-588b-11ed-9b6a-0242ac120002
static const AudioUuid kVolumeSwImplUUID = {static_cast<int32_t>(0xfa81a718),
                                            0x588b,
                                            0x11ed,
                                            0x9b6a,
                                            {0x02, 0x42, 0xac, 0x12, 0x00, 0x02}};
// 119341a0-8469-11df-81f9-0002a5d5c51b
static const AudioUuid kVolumeBundleImplUUID = {static_cast<int32_t>(0x119341a0),
                                                0x8469,
                                                0x11df,
                                                0x81f9,
                                                {0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};

// fa81dbde-588b-11ed-9b6a-0242ac120002
static const AudioUuid kExtensionEffectTypeUUID = {static_cast<int32_t>(0xfa81dbde),
                                                   0x588b,
                                                   0x11ed,
                                                   0x9b6a,
                                                   {0x02, 0x42, 0xac, 0x12, 0x00, 0x02}};
// fa81dd00-588b-11ed-9b6a-0242ac120002
static const AudioUuid kExtensionEffectImplUUID = {static_cast<int32_t>(0xfa81dd00),
                                                   0x588b,
                                                   0x11ed,
                                                   0x9b6a,
                                                   {0x02, 0x42, 0xac, 0x12, 0x00, 0x02}};
/**
 * @brief A map between effect name and effect type UUID.
 * All <name> attribution in effect/effectProxy of audio_effects.xml should be listed in this map.
 * We need this map is because existing audio_effects.xml don't have a type UUID defined.
 */
static const std::map<const std::string /* effect type */, const AudioUuid&> kUuidNameTypeMap = {
        {"acoustic_echo_canceler", kAcousticEchoCancelerTypeUUID},
        {"automatic_gain_control", kAutomaticGainControlTypeUUID},
        {"bassboost", kBassBoostTypeUUID},
        {"downmix", kDownmixTypeUUID},
        {"dynamics_processing", kDynamicsProcessingTypeUUID},
        {"equalizer", kEqualizerTypeUUID},
        {"extensioneffect", kExtensionEffectTypeUUID},
        {"haptic_generator", kHapticGeneratorTypeUUID},
        {"loudness_enhancer", kLoudnessEnhancerTypeUUID},
        {"env_reverb", kEnvReverbTypeUUID},
        {"noise_suppression", kNoiseSuppressionTypeUUID},
        {"preset_reverb", kPresetReverbTypeUUID},
        {"reverb_env_aux", kEnvReverbTypeUUID},
        {"reverb_env_ins", kEnvReverbTypeUUID},
        {"reverb_pre_aux", kPresetReverbTypeUUID},
        {"reverb_pre_ins", kPresetReverbTypeUUID},
        {"virtualizer", kVirtualizerTypeUUID},
        {"visualizer", kVisualizerTypeUUID},
        {"volume", kVolumeTypeUUID},
};

}  // namespace aidl::android::hardware::audio::effect
