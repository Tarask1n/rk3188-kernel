#ifndef __TCHIP_CAMERA_SETUP__
#define __TCHIP_CAMERA_SETUP__

#ifdef CONFIG_TCHIP_MACH_DOUBLE_CAMEAR 
#define CONFIG_TCHIP_MACH_SINGLE_FRONT_CAMERA
#define CONFIG_TCHIP_MACH_SINGLE_BACK_CAMERA
#endif

static struct rkcamera_platform_data new_camera[] = {
    new_camera_device_ex(RK29_CAM_SENSOR_GC0308,
                        front,
                        0, //CONFIG_SENSOR_ORIENTATION_X
                        INVALID_GPIO, //CONFIG_SENSOR_POWER_PIN_
                        0,//CONFIG_SENSOR_POWERACTIVE_LEVEL_
                        INVALID_GPIO, //CONFIG_SENSOR_RESET_PIN
                        0,//CONFIG_SENSOR_RESETACTIVE_LEVEL
                        RK30_PIN3_PB4,//CONFIG_SENSOR_POWERDN_PIN
                        (CONS(RK29_CAM_SENSOR_GC0308,_PWRDN_ACTIVE)&0x10)|0x01,//CONFIG_SENSOR_POWERDNACTIVE_LEVEL_X
                        0,//flash led 
                        gc0308_FULL_RESOLUTION,// resolution ,define use gc0308_FULL_RESOLUTION  in arch/arm/plat-rk/include/plat/rk_camera.h
                        0,//bit0=mirror[0/1] and bit1=flip[0/1]
                        3,// i2c changel  == CONFIG_SENSOR_IIC_ADAPTER_ID_X
                        100000,//// i2c speed , 100000 = 100KHz
                        CONS(RK29_CAM_SENSOR_GC0308,_I2C_ADDR),//  define use gc0308_I2C_ADDR in arch/arm/plat-rk/include/plat/rk_camera.h ,too
                        0,//cif == CONFIG_SENSOR_CIF_INDEX_X
            			24),
    new_camera_device_ex(RK29_CAM_SENSOR_SP2518,
                        front,
                        0, //CONFIG_SENSOR_ORIENTATION_X
                        INVALID_GPIO, //CONFIG_SENSOR_POWER_PIN_
                        0,//CONFIG_SENSOR_POWERACTIVE_LEVEL_
                        INVALID_GPIO, //CONFIG_SENSOR_RESET_PIN
                        0,//CONFIG_SENSOR_RESETACTIVE_LEVEL
                        RK30_PIN3_PB4,//CONFIG_SENSOR_POWERDN_PIN
                        (CONS(RK29_CAM_SENSOR_SP2518,_PWRDN_ACTIVE)&0x10)|0x01,//CONFIG_SENSOR_POWERDNACTIVE_LEVEL_X
                        0,//flash led 
                        sp2518_FULL_RESOLUTION,// resolution ,define use sp2518_FULL_RESOLUTION  in arch/arm/plat-rk/include/plat/rk_camera.h
                        2,//bit0=mirror[0/1] and bit1=flip[0/1]
                        3,// i2c changel  == CONFIG_SENSOR_IIC_ADAPTER_ID_X
                        100000,//// i2c speed , 100000 = 100KHz
                        CONS(RK29_CAM_SENSOR_SP2518,_I2C_ADDR),//  define use sp2518_I2C_ADDR in arch/arm/plat-rk/include/plat/rk_camera.h ,too
                        0,//cif == CONFIG_SENSOR_CIF_INDEX_X
            			24),
    new_camera_device_ex(RK29_CAM_SENSOR_SP2518,
                        back,
                        0, //CONFIG_SENSOR_ORIENTATION_X
                        INVALID_GPIO, //CONFIG_SENSOR_POWER_PIN_
                        0,//CONFIG_SENSOR_POWERACTIVE_LEVEL_
                        INVALID_GPIO, //CONFIG_SENSOR_RESET_PIN
                        0,//CONFIG_SENSOR_RESETACTIVE_LEVEL
                        RK30_PIN3_PB5,//CONFIG_SENSOR_POWERDN_PIN
                        (CONS(RK29_CAM_SENSOR_SP2518,_PWRDN_ACTIVE)&0x10)|0x01,//CONFIG_SENSOR_POWERDNACTIVE_LEVEL_X
                        0,//flash led 
                        sp2518_FULL_RESOLUTION,// resolution ,define use sp2518_FULL_RESOLUTION  in arch/arm/plat-rk/include/plat/rk_camera.h
                        2,//bit0=mirror[0/1] and bit1=flip[0/1]
                        3,// i2c changel  == CONFIG_SENSOR_IIC_ADAPTER_ID_X
                        100000,//// i2c speed , 100000 = 100KHz
                        CONS(RK29_CAM_SENSOR_SP2518,_I2C_ADDR),//  define use sp2518_I2C_ADDR in arch/arm/plat-rk/include/plat/rk_camera.h ,too
                        0,//cif == CONFIG_SENSOR_CIF_INDEX_X
            			24),
    new_camera_device_ex(RK29_CAM_SENSOR_GC2035,
                        front,
                        0, //CONFIG_SENSOR_ORIENTATION_X
                        INVALID_GPIO, //CONFIG_SENSOR_POWER_PIN_
                        0,//CONFIG_SENSOR_POWERACTIVE_LEVEL_
                        INVALID_GPIO, //CONFIG_SENSOR_RESET_PIN
                        0,//CONFIG_SENSOR_RESETACTIVE_LEVEL
                        RK30_PIN3_PB4,//CONFIG_SENSOR_POWERDN_PIN
                        (CONS(RK29_CAM_SENSOR_GC2035,_PWRDN_ACTIVE)&0x10)|0x01,//CONFIG_SENSOR_POWERDNACTIVE_LEVEL_X
                        0,//flash led 
                        CONS(RK29_CAM_SENSOR_GC2035,_FULL_RESOLUTION),// resolution ,define use gc2035_FULL_RESOLUTION  in arch/arm/plat-rk/include/plat/rk_camera.h
                        0,//bit0=mirror[0/1] and bit1=flip[0/1]
                        3,// i2c changel  == CONFIG_SENSOR_IIC_ADAPTER_ID_X
                        100000,//// i2c speed , 100000 = 100KHz
						CONS(RK29_CAM_SENSOR_GC2035,_I2C_ADDR),//  define use gc2035_I2C_ADDR in arch/arm/plat-rk/include/plat/rk_camera.h ,too
                        0,//cif == CONFIG_SENSOR_CIF_INDEX_X
            24), //sensor input clock rate, 24 or 48 
    new_camera_device_ex(RK29_CAM_SENSOR_GC2035,
                        back,
                        0, //CONFIG_SENSOR_ORIENTATION_X
                        INVALID_GPIO, //CONFIG_SENSOR_POWER_PIN_
                        0,//CONFIG_SENSOR_POWERACTIVE_LEVEL_
                        INVALID_GPIO, //CONFIG_SENSOR_RESET_PIN
                        0,//CONFIG_SENSOR_RESETACTIVE_LEVEL
                        RK30_PIN3_PB5,//CONFIG_SENSOR_POWERDN_PIN
                        (CONS(RK29_CAM_SENSOR_GC2035,_PWRDN_ACTIVE)&0x10)|0x01,//CONFIG_SENSOR_POWERDNACTIVE_LEVEL_X
                        0,//flash led 
                        CONS(RK29_CAM_SENSOR_GC2035,_FULL_RESOLUTION),// resolution ,define use gc2035_FULL_RESOLUTION  in arch/arm/plat-rk/include/plat/rk_camera.h
                        0,//bit0=mirror[0/1] and bit1=flip[0/1]
                        3,// i2c changel  == CONFIG_SENSOR_IIC_ADAPTER_ID_X
                        100000,//// i2c speed , 100000 = 100KHz
                        CONS(RK29_CAM_SENSOR_GC2035,_I2C_ADDR),//  define use gc2035_I2C_ADDR in arch/arm/plat-rk/include/plat/rk_camera.h ,too
                        0,//cif == CONFIG_SENSOR_CIF_INDEX_X
            24), //sensor input clock rate, 24 or 48 
    new_camera_device_ex(RK29_CAM_SENSOR_GC0328,
                        front,
                        0, //CONFIG_SENSOR_ORIENTATION_X
                        INVALID_GPIO, //CONFIG_SENSOR_POWER_PIN_
                        0,//CONFIG_SENSOR_POWERACTIVE_LEVEL_
                        INVALID_GPIO, //CONFIG_SENSOR_RESET_PIN
                        0,//CONFIG_SENSOR_RESETACTIVE_LEVEL
                        RK30_PIN3_PB4,//CONFIG_SENSOR_POWERDN_PIN
                        (CONS(RK29_CAM_SENSOR_GC0328,_PWRDN_ACTIVE)&0x10)|0x01,//CONFIG_SENSOR_POWERDNACTIVE_LEVEL_X
                        0,//flash led 
                        gc0328_FULL_RESOLUTION,// resolution ,define use gc0328_FULL_RESOLUTION  in arch/arm/plat-rk/include/plat/rk_camera.h
                        0,//bit0=mirror[0/1] and bit1=flip[0/1]
                        3,// i2c changel  == CONFIG_SENSOR_IIC_ADAPTER_ID_X
                        100000,//// i2c speed , 100000 = 100KHz
                        CONS(RK29_CAM_SENSOR_GC0328,_I2C_ADDR),//  define use gc0328_I2C_ADDR in arch/arm/plat-rk/include/plat/rk_camera.h ,too
                        0,//cif == CONFIG_SENSOR_CIF_INDEX_X
            			24),
	new_camera_device_end
};
#endif


