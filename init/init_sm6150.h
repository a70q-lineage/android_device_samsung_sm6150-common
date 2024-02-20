#ifndef INIT_SEC_H
#define INIT_SEC_H

#include <string.h>

enum device_variant {
    VARIANT_A705F = 0,
    VARIANT_A705FN,
    VARIANT_A705GM,
    VARIANT_A705MN,
    VARIANT_A7050,
    VARIANT_A705W,
    VARIANT_A705YN,
    VARIANT_A705U,
    VARIANT_A707F,
    VARIANT_A7070,
    VARIANT_MAX
};

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant f_models = {
    .model = "SM-A705F",
    .codename = "a70q"
};

static const variant international_models = {
    .model = "SM-A705FN",
    .codename = "a70q"
};

static const variant gm_models = {
    .model = "SM-A705GM",
    .codename = "a70q"
};

static const variant america_models = {
    .model = "SM-A705MN",
    .codename = "a70q"
};

static const variant zero_models = {
    .model = "SM-A7050",
    .codename = "a70q"
};

static const variant w_models = {
    .model = "SM-A705W",
    .codename = "a70q"
};

static const variant yn_models = {
    .model = "SM-A705YN",
    .codename = "a70q"
};

static const variant u_models = {
    .model = "SM-A705U",
    .codename = "a70q"
};

static const variant f_models_a70s = {
    .model = "SM-A707F",
    .codename = "a70s"
};

static const variant zero_models_a70s = {
    .model = "SM-A7070",
    .codename = "a70s"
};

static const variant *all_variants[VARIANT_MAX] = {
    &f_models,
    &international_models,
    &gm_models,
    &america_models,
    &zero_models,
    &w_models,
    &yn_models,
    &u_models,
    &f_models_a70s,
    &zero_models_a70s
};

#endif // INIT_SEC_H