/*
 * Copyright 2019, Proyectos y Sistemas de Mantenimiento SL (eProsima).
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/**
 * @file
 */

#ifndef EPROSIMA_DDS_SUB_DETAIL_DISCOVERY_HPP_
#define EPROSIMA_DDS_SUB_DETAIL_DISCOVERY_HPP_

#include <dds/sub/DataReader.hpp>
#include <dds/topic/BuiltinTopic.hpp>

/**
 * @cond
 * Ignore this file in the API
 */

namespace dds {
namespace sub {

template<typename FwdIterator>
void ignore(
        const dds::domain::DomainParticipant& dp,
        FwdIterator begin,
        FwdIterator end)
{
    //To implement
    //    ISOCPP_THROW_EXCEPTION(ISOCPP_UNSUPPORTED_ERROR, "Function not currently supported");
}

template<
    typename T,
    template<typename Q> class DELEGATE>
::dds::core::InstanceHandleSeq matched_publications(
        const DataReader<T>& dr)
{
    //To implement
    //    ISOCPP_REPORT_STACK_DDS_BEGIN(dr);
    //    return dr.delegate()->matched_publications();
}

template<
    typename T,
    typename FwdIterator,
    template<typename Q> class DELEGATE>
uint32_t matched_publications(
        const DataReader<T>& dr,
        FwdIterator begin,
        uint32_t max_size)
{
    //To implement
    //    ISOCPP_REPORT_STACK_DDS_BEGIN(dr);
    //    return dr.delegate()->matched_publications(begin, max_size);
}

template<typename T,
        template<typename Q> class DELEGATE>
const dds::topic::PublicationBuiltinTopicData matched_publication_data(
        const dds::sub::DataReader<T>& dr,
        const ::dds::core::InstanceHandle& h)
{
    //To implement
    //    ISOCPP_REPORT_STACK_DDS_BEGIN(dr);
    //    return dr.delegate()->matched_publication_data(h);
}

} //namespace sub
} //namespace dds

/** @endcond */

#endif //EPROSIMA_DDS_SUB_DETAIL_DISCOVERY_HPP_