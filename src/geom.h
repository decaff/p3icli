
/*
 * geom.h -- include file for geom.cpp
 *
 */

#ifndef GEOM_H
#define GEOM_H

/* --------------------------- types ---------------------------- */

enum Slide_Geom { GEOM_DFLT, GEOM_4_3, GEOM_16_9, GEOM_A4, GEOM_CUST };

const long GEOM_MIN_X_Y_DIM = 72;   // 72 points, aka 1 in.

class geom
{
private:
    long geom_cust_x;         // Custom Geometry x coord.
    long geom_cust_y;         // Custom Geometry y coord.

    Slide_Geom geom_slide_state;
                             // Values:
                                // GEOM_4_3 -- format for templates created
                                // pre-Office 2013 (i.e., a 4:3 rectangular
                                // aspect ratio).
                                //
                                // GEOM_16_9 -- format for slides created
                                // in Office 2013 and later, with an HD aspect
                                // ratio of 16:9 (i.e., 13.33in wide  slides).
                                //
                                // GEOM_A4 -- PPT A4 slide dims (landscape),
                                // which are not the same as ISO A4 dims.
                                //
                                // GEOM_CUST -- user-specified dims.
                                //
                                // GEOM_DFLT -- default (i.e., don't adjust
                                // slide size).
                                //
                                // Note that slide geometry:
                                //
                                // 1) cannot be specified for a template
                                //    specified via the "open template"
                                //    command, and
                                //
                                // 2) can only be specified before the
                                //    first slide is inserted into a
                                //    presentation.
                                //
                                // See the ref manual for details.

    geom(const geom &rhs);      // no copy constructor
    geom & operator=(const geom &rhs);
                                // and no assignment operator
public:
    geom()                             {
                                         geom_slide_state = GEOM_DFLT;
                                         geom_cust_x      = GEOM_MIN_X_Y_DIM;
                                         geom_cust_y      = GEOM_MIN_X_Y_DIM;
                                       }
    ~geom()                            {
                                         geom_slide_state = GEOM_DFLT;
                                         geom_cust_x      = GEOM_MIN_X_Y_DIM;
                                         geom_cust_y      = GEOM_MIN_X_Y_DIM;
                                       }

    void geom_slide_style_set(Slide_Geom val)
                                       {
                                         geom_slide_state = val;
                                       }

    Slide_Geom geom_slide_style(void)  { return (geom_slide_state); }

    void geom_slide_cust_dims_set(long x, long y)
                                       {
                                         geom_cust_x = x; geom_cust_y = y;
                                       }

    void geom_slide_cust_dims_get(long &x, long &y)
                                       {
                                         x = geom_cust_x; y = geom_cust_y;
                                       }

    void make_slide_16_9_aspect_ratio(void);
    void make_slide_4_3_aspect_ratio(void);
    void make_slide_a4_geom(void);
    void make_slide_cust_geom(void);
};

/* --------------------------- externs ---------------------------- */

extern geom       *geom_slide;  // instantiated geom Interface

#endif
