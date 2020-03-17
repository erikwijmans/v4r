#ifndef VULKAN_CONFIG_HPP_INCLUDED
#define VULKAN_CONFIG_HPP_INCLUDED

#include <vulkan/vulkan.hpp>

namespace v4r {

namespace VulkanConfig {

constexpr uint32_t num_desired_gfx_queues = 1;
constexpr uint32_t num_desired_compute_queues = 1;
constexpr uint32_t num_desired_transfer_queues = 1;

constexpr float gfx_priority = 1.0;
constexpr float compute_priority = 1.0;
constexpr float transfer_priority = 1.0;

const uint32_t num_images_per_fb = 64;

}

}

#endif
