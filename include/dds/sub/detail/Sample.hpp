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

#ifndef EPROSIMA_DDS_PUB_DETAIL_SAMPLE_HPP_
#define EPROSIMA_DDS_PUB_DETAIL_SAMPLE_HPP_

/**
 * @cond
 * Ignore this file in the API
 */

#include <dds/sub/SampleInfo.hpp>

namespace dds {
namespace sub {
namespace detail {

template<typename T>
class Sample
{
public:

    Sample()
    {
    }

    Sample(
            const T& d,
            const dds::sub::SampleInfo& i)
    {
        this->data_ = d;
        this->info_ = i;
    }

    Sample(
            const Sample& other)
    {
        copy(other);
    }

    Sample& operator =(
            const Sample& other)
    {
        return copy(other);
    }

    Sample& copy(
            const Sample& other)
    {
        this->data_ = other.data_;
        this->info_ = other.info_;

        return *this;
    }

    const T& data() const
    {
        return data_;
    }

    T& data()
    {
        return data_;
    }

    void data(
            const T& d)
    {
        data_ = d;
    }

    const dds::sub::SampleInfo& info() const
    {
        return info_;
    }

    dds::sub::SampleInfo& info()
    {
        return info_;
    }

    void info(
            const dds::sub::SampleInfo& i)
    {
        info_ = i;
    }

    bool operator ==(
            const Sample& other) const
    {
        return (this->data_ == other->data_ &&
                this->info_ == other->info_);
    }

    T* data_ptr()
    {
        return &this->data_;
    }

    dds::sub::SampleInfo *info_ptr()
    {
        return &this->info_;
    }


private:

    T data_;
    dds::sub::SampleInfo info_;
};

} //namespace detail
} //namespace sub
} //namespace dds

/** @endcond */

#endif //EPROSIMA_DDS_PUB_DETAIL_SAMPLE_HPP_