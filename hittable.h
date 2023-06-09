#ifndef HITTABLE_HEADER
#define HITTABLE_HEADER

#include <memory>
#include "math.h"
#include "util.h"
#include <vector>

class Renderable
{
public:
    virtual bool hit(Math::Ray ray, float t0, float t1, std::shared_ptr<Util::HitRecord> & hitRecord) const = 0;
    virtual Util::Color computeColor(
        const std::vector<std::unique_ptr<LightSource>> & lightSources,
        Math::Ray viewRay,
        std::shared_ptr<Renderable> surface,
        std::shared_ptr<Util::HitRecord> hitRecord
    ) const = 0;
};

#endif
