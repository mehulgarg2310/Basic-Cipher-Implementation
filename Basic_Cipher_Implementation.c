#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void step_1(unsigned char arr[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            switch (arr[i][j])
            {
            case 0x00:
                arr[i][j] = 0x63;
                break;
            case 0x01:
                arr[i][j] = 0x7C;
                break;
            case 0x02:
                arr[i][j] = 0x77;
                break;
            case 0x03:
                arr[i][j] = 0x7B;
                break;
            case 0x04:
                arr[i][j] = 0xF2;
                break;
            case 0x05:
                arr[i][j] = 0x6B;
                break;
            case 0x06:
                arr[i][j] = 0x6F;
                break;
            case 0x07:
                arr[i][j] = 0xC5;
                break;
            case 0x08:
                arr[i][j] = 0x30;
                break;
            case 0x09:
                arr[i][j] = 0x01;
                break;
            case 0x0A:
                arr[i][j] = 0x67;
                break;
            case 0x0B:
                arr[i][j] = 0x2B;
                break;
            case 0x0C:
                arr[i][j] = 0xFE;
                break;
            case 0x0D:
                arr[i][j] = 0xD7;
                break;
            case 0x0E:
                arr[i][j] = 0xAB;
                break;
            case 0x0F:
                arr[i][j] = 0x76;
                break;

            case 0x10:
                arr[i][j] = 0xCA;
                break;
            case 0x11:
                arr[i][j] = 0x82;
                break;
            case 0x12:
                arr[i][j] = 0xC9;
                break;
            case 0x13:
                arr[i][j] = 0x7D;
                break;
            case 0x14:
                arr[i][j] = 0xFA;
                break;
            case 0x15:
                arr[i][j] = 0x59;
                break;
            case 0x16:
                arr[i][j] = 0x47;
                break;
            case 0x17:
                arr[i][j] = 0xF0;
                break;
            case 0x18:
                arr[i][j] = 0xAD;
                break;
            case 0x19:
                arr[i][j] = 0xD4;
                break;
            case 0x1A:
                arr[i][j] = 0xA2;
                break;
            case 0x1B:
                arr[i][j] = 0xAF;
                break;
            case 0x1C:
                arr[i][j] = 0x9C;
                break;
            case 0x1D:
                arr[i][j] = 0xA4;
                break;
            case 0x1E:
                arr[i][j] = 0x72;
                break;
            case 0x1F:
                arr[i][j] = 0xC0;
                break;

            case 0x20:
                arr[i][j] = 0xB7;
                break;
            case 0x21:
                arr[i][j] = 0xFD;
                break;
            case 0x22:
                arr[i][j] = 0x93;
                break;
            case 0x23:
                arr[i][j] = 0x26;
                break;
            case 0x24:
                arr[i][j] = 0x36;
                break;
            case 0x25:
                arr[i][j] = 0x3F;
                break;
            case 0x26:
                arr[i][j] = 0xF7;
                break;
            case 0x27:
                arr[i][j] = 0xCC;
                break;
            case 0x28:
                arr[i][j] = 0x34;
                break;
            case 0x29:
                arr[i][j] = 0xA5;
                break;
            case 0x2A:
                arr[i][j] = 0xE5;
                break;
            case 0x2B:
                arr[i][j] = 0xF1;
                break;
            case 0x2C:
                arr[i][j] = 0x71;
                break;
            case 0x2D:
                arr[i][j] = 0xD8;
                break;
            case 0x2E:
                arr[i][j] = 0x31;
                break;
            case 0x2F:
                arr[i][j] = 0x15;
                break;

            case 0x30:
                arr[i][j] = 0x04;
                break;
            case 0x31:
                arr[i][j] = 0xC7;
                break;
            case 0x32:
                arr[i][j] = 0x23;
                break;
            case 0x33:
                arr[i][j] = 0xC3;
                break;
            case 0x34:
                arr[i][j] = 0x18;
                break;
            case 0x35:
                arr[i][j] = 0x96;
                break;
            case 0x36:
                arr[i][j] = 0x05;
                break;
            case 0x37:
                arr[i][j] = 0x9A;
                break;
            case 0x38:
                arr[i][j] = 0x07;
                break;
            case 0x39:
                arr[i][j] = 0x12;
                break;
            case 0x3A:
                arr[i][j] = 0x80;
                break;
            case 0x3B:
                arr[i][j] = 0xE2;
                break;
            case 0x3C:
                arr[i][j] = 0xEB;
                break;
            case 0x3D:
                arr[i][j] = 0x27;
                break;
            case 0x3E:
                arr[i][j] = 0xB2;
                break;
            case 0x3F:
                arr[i][j] = 0x75;
                break;

            case 0x40:
                arr[i][j] = 0x09;
                break;
            case 0x41:
                arr[i][j] = 0x83;
                break;
            case 0x42:
                arr[i][j] = 0x2C;
                break;
            case 0x43:
                arr[i][j] = 0x1A;
                break;
            case 0x44:
                arr[i][j] = 0x1B;
                break;
            case 0x45:
                arr[i][j] = 0x6E;
                break;
            case 0x46:
                arr[i][j] = 0x5A;
                break;
            case 0x47:
                arr[i][j] = 0xA0;
                break;
            case 0x48:
                arr[i][j] = 0x52;
                break;
            case 0x49:
                arr[i][j] = 0x3B;
                break;
            case 0x4A:
                arr[i][j] = 0xD6;
                break;
            case 0x4B:
                arr[i][j] = 0xB3;
                break;
            case 0x4C:
                arr[i][j] = 0x29;
                break;
            case 0x4D:
                arr[i][j] = 0xE3;
                break;
            case 0x4E:
                arr[i][j] = 0x2F;
                break;
            case 0x4F:
                arr[i][j] = 0x84;
                break;

            case 0x50:
                arr[i][j] = 0x53;
                break;
            case 0x51:
                arr[i][j] = 0xD1;
                break;
            case 0x52:
                arr[i][j] = 0x00;
                break;
            case 0x53:
                arr[i][j] = 0xED;
                break;
            case 0x54:
                arr[i][j] = 0x20;
                break;
            case 0x55:
                arr[i][j] = 0xFC;
                break;
            case 0x56:
                arr[i][j] = 0xB1;
                break;
            case 0x57:
                arr[i][j] = 0x5B;
                break;
            case 0x58:
                arr[i][j] = 0x6A;
                break;
            case 0x59:
                arr[i][j] = 0xCB;
                break;
            case 0x5A:
                arr[i][j] = 0xBE;
                break;
            case 0x5B:
                arr[i][j] = 0x39;
                break;
            case 0x5C:
                arr[i][j] = 0x4A;
                break;
            case 0x5D:
                arr[i][j] = 0x4C;
                break;
            case 0x5E:
                arr[i][j] = 0x58;
                break;
            case 0x5F:
                arr[i][j] = 0xCF;
                break;

            case 0x60:
                arr[i][j] = 0xD0;
                break;
            case 0x61:
                arr[i][j] = 0xEF;
                break;
            case 0x62:
                arr[i][j] = 0xAA;
                break;
            case 0x63:
                arr[i][j] = 0xFB;
                break;
            case 0x64:
                arr[i][j] = 0x43;
                break;
            case 0x65:
                arr[i][j] = 0x4D;
                break;
            case 0x66:
                arr[i][j] = 0x33;
                break;
            case 0x67:
                arr[i][j] = 0x85;
                break;
            case 0x68:
                arr[i][j] = 0x45;
                break;
            case 0x69:
                arr[i][j] = 0xF9;
                break;
            case 0x6A:
                arr[i][j] = 0x02;
                break;
            case 0x6B:
                arr[i][j] = 0x7F;
                break;
            case 0x6C:
                arr[i][j] = 0x50;
                break;
            case 0x6D:
                arr[i][j] = 0x3C;
                break;
            case 0x6E:
                arr[i][j] = 0x9F;
                break;
            case 0x6F:
                arr[i][j] = 0xA8;
                break;

            case 0x70:
                arr[i][j] = 0x51;
                break;
            case 0x71:
                arr[i][j] = 0xA3;
                break;
            case 0x72:
                arr[i][j] = 0x40;
                break;
            case 0x73:
                arr[i][j] = 0x8F;
                break;
            case 0x74:
                arr[i][j] = 0x92;
                break;
            case 0x75:
                arr[i][j] = 0x9D;
                break;
            case 0x76:
                arr[i][j] = 0x38;
                break;
            case 0x77:
                arr[i][j] = 0xF5;
                break;
            case 0x78:
                arr[i][j] = 0xBC;
                break;
            case 0x79:
                arr[i][j] = 0xB6;
                break;
            case 0x7A:
                arr[i][j] = 0xDA;
                break;
            case 0x7B:
                arr[i][j] = 0x21;
                break;
            case 0x7C:
                arr[i][j] = 0x10;
                break;
            case 0x7D:
                arr[i][j] = 0xFF;
                break;
            case 0x7E:
                arr[i][j] = 0xF3;
                break;
            case 0x7F:
                arr[i][j] = 0xD2;
                break;

            case 0x80:
                arr[i][j] = 0xCD;
                break;
            case 0x81:
                arr[i][j] = 0x0C;
                break;
            case 0x82:
                arr[i][j] = 0x13;
                break;
            case 0x83:
                arr[i][j] = 0xEC;
                break;
            case 0x84:
                arr[i][j] = 0x5F;
                break;
            case 0x85:
                arr[i][j] = 0x97;
                break;
            case 0x86:
                arr[i][j] = 0x44;
                break;
            case 0x87:
                arr[i][j] = 0x17;
                break;
            case 0x88:
                arr[i][j] = 0xC4;
                break;
            case 0x89:
                arr[i][j] = 0xA7;
                break;
            case 0x8A:
                arr[i][j] = 0x7E;
                break;
            case 0x8B:
                arr[i][j] = 0x3D;
                break;
            case 0x8C:
                arr[i][j] = 0x64;
                break;
            case 0x8D:
                arr[i][j] = 0x5D;
                break;
            case 0x8E:
                arr[i][j] = 0x19;
                break;
            case 0x8F:
                arr[i][j] = 0x73;
                break;

            case 0x90:
                arr[i][j] = 0x60;
                break;
            case 0x91:
                arr[i][j] = 0x81;
                break;
            case 0x92:
                arr[i][j] = 0x4F;
                break;
            case 0x93:
                arr[i][j] = 0xDC;
                break;
            case 0x94:
                arr[i][j] = 0x22;
                break;
            case 0x95:
                arr[i][j] = 0x2A;
                break;
            case 0x96:
                arr[i][j] = 0x90;
                break;
            case 0x97:
                arr[i][j] = 0x88;
                break;
            case 0x98:
                arr[i][j] = 0x46;
                break;
            case 0x99:
                arr[i][j] = 0xEE;
                break;
            case 0x9A:
                arr[i][j] = 0xB8;
                break;
            case 0x9B:
                arr[i][j] = 0x14;
                break;
            case 0x9C:
                arr[i][j] = 0xDE;
                break;
            case 0x9D:
                arr[i][j] = 0x5E;
                break;
            case 0x9E:
                arr[i][j] = 0x0B;
                break;
            case 0x9F:
                arr[i][j] = 0xDB;
                break;

            case 0xA0:
                arr[i][j] = 0xE0;
                break;
            case 0xA1:
                arr[i][j] = 0x32;
                break;
            case 0xA2:
                arr[i][j] = 0x3A;
                break;
            case 0xA3:
                arr[i][j] = 0x0A;
                break;
            case 0xA4:
                arr[i][j] = 0x49;
                break;
            case 0xA5:
                arr[i][j] = 0x06;
                break;
            case 0xA6:
                arr[i][j] = 0x24;
                break;
            case 0xA7:
                arr[i][j] = 0x5C;
                break;
            case 0xA8:
                arr[i][j] = 0xC2;
                break;
            case 0xA9:
                arr[i][j] = 0xD3;
                break;
            case 0xAA:
                arr[i][j] = 0xAC;
                break;
            case 0xAB:
                arr[i][j] = 0x62;
                break;
            case 0xAC:
                arr[i][j] = 0x91;
                break;
            case 0xAD:
                arr[i][j] = 0x95;
                break;
            case 0xAE:
                arr[i][j] = 0xE4;
                break;
            case 0xAF:
                arr[i][j] = 0x79;
                break;

            case 0xB0:
                arr[i][j] = 0xE7;
                break;
            case 0xB1:
                arr[i][j] = 0xC8;
                break;
            case 0xB2:
                arr[i][j] = 0x37;
                break;
            case 0xB3:
                arr[i][j] = 0x6D;
                break;
            case 0xB4:
                arr[i][j] = 0x8D;
                break;
            case 0xB5:
                arr[i][j] = 0xD5;
                break;
            case 0xB6:
                arr[i][j] = 0x4E;
                break;
            case 0xB7:
                arr[i][j] = 0xA9;
                break;
            case 0xB8:
                arr[i][j] = 0x6C;
                break;
            case 0xB9:
                arr[i][j] = 0x56;
                break;
            case 0xBA:
                arr[i][j] = 0xF4;
                break;
            case 0xBB:
                arr[i][j] = 0xEA;
                break;
            case 0xBC:
                arr[i][j] = 0x65;
                break;
            case 0xBD:
                arr[i][j] = 0x7A;
                break;
            case 0xBE:
                arr[i][j] = 0xAE;
                break;
            case 0xBF:
                arr[i][j] = 0x08;
                break;

            case 0xC0:
                arr[i][j] = 0xBA;
                break;
            case 0xC1:
                arr[i][j] = 0x78;
                break;
            case 0xC2:
                arr[i][j] = 0x25;
                break;
            case 0xC3:
                arr[i][j] = 0x2E;
                break;
            case 0xC4:
                arr[i][j] = 0x1C;
                break;
            case 0xC5:
                arr[i][j] = 0xA6;
                break;
            case 0xC6:
                arr[i][j] = 0xB4;
                break;
            case 0xC7:
                arr[i][j] = 0xC6;
                break;
            case 0xC8:
                arr[i][j] = 0xE8;
                break;
            case 0xC9:
                arr[i][j] = 0xDD;
                break;
            case 0xCA:
                arr[i][j] = 0x74;
                break;
            case 0xCB:
                arr[i][j] = 0x1F;
                break;
            case 0xCC:
                arr[i][j] = 0x4B;
                break;
            case 0xCD:
                arr[i][j] = 0xBD;
                break;
            case 0xCE:
                arr[i][j] = 0x8B;
                break;
            case 0xCF:
                arr[i][j] = 0x8A;
                break;

            case 0xD0:
                arr[i][j] = 0x70;
                break;
            case 0xD1:
                arr[i][j] = 0x3E;
                break;
            case 0xD2:
                arr[i][j] = 0xB5;
                break;
            case 0xD3:
                arr[i][j] = 0x66;
                break;
            case 0xD4:
                arr[i][j] = 0x48;
                break;
            case 0xD5:
                arr[i][j] = 0x03;
                break;
            case 0xD6:
                arr[i][j] = 0xF6;
                break;
            case 0xD7:
                arr[i][j] = 0x0E;
                break;
            case 0xD8:
                arr[i][j] = 0x61;
                break;
            case 0xD9:
                arr[i][j] = 0x35;
                break;
            case 0xDA:
                arr[i][j] = 0x57;
                break;
            case 0xDB:
                arr[i][j] = 0xB9;
                break;
            case 0xDC:
                arr[i][j] = 0x86;
                break;
            case 0xDD:
                arr[i][j] = 0xC1;
                break;
            case 0xDE:
                arr[i][j] = 0x1D;
                break;
            case 0xDF:
                arr[i][j] = 0x9E;
                break;

            case 0xE0:
                arr[i][j] = 0xE1;
                break;
            case 0xE1:
                arr[i][j] = 0xF8;
                break;
            case 0xE2:
                arr[i][j] = 0x98;
                break;
            case 0xE3:
                arr[i][j] = 0x11;
                break;
            case 0xE4:
                arr[i][j] = 0x69;
                break;
            case 0xE5:
                arr[i][j] = 0xD9;
                break;
            case 0xE6:
                arr[i][j] = 0x8E;
                break;
            case 0xE7:
                arr[i][j] = 0x94;
                break;
            case 0xE8:
                arr[i][j] = 0x9B;
                break;
            case 0xE9:
                arr[i][j] = 0x1E;
                break;
            case 0xEA:
                arr[i][j] = 0x87;
                break;
            case 0xEB:
                arr[i][j] = 0xE9;
                break;
            case 0xEC:
                arr[i][j] = 0xCE;
                break;
            case 0xED:
                arr[i][j] = 0x55;
                break;
            case 0xEE:
                arr[i][j] = 0x28;
                break;
            case 0xEF:
                arr[i][j] = 0xDF;
                break;

            case 0xF0:
                arr[i][j] = 0x8C;
                break;
            case 0xF1:
                arr[i][j] = 0xA1;
                break;
            case 0xF2:
                arr[i][j] = 0x89;
                break;
            case 0xF3:
                arr[i][j] = 0x0D;
                break;
            case 0xF4:
                arr[i][j] = 0xBF;
                break;
            case 0xF5:
                arr[i][j] = 0xE6;
                break;
            case 0xF6:
                arr[i][j] = 0x42;
                break;
            case 0xF7:
                arr[i][j] = 0x68;
                break;
            case 0xF8:
                arr[i][j] = 0x41;
                break;
            case 0xF9:
                arr[i][j] = 0x99;
                break;
            case 0xFA:
                arr[i][j] = 0x2D;
                break;
            case 0xFB:
                arr[i][j] = 0x0F;
                break;
            case 0xFC:
                arr[i][j] = 0xB0;
                break;
            case 0xFD:
                arr[i][j] = 0x54;
                break;
            case 0xFE:
                arr[i][j] = 0xBB;
                break;
            case 0xFF:
                arr[i][j] = 0x16;
                break;
            }
        }
    }
}

void step_2(unsigned char arr[4][4])
{
    unsigned char array[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array[i][j] = arr[i][j];
        }
    }
    arr[0][0] = array[0][0];
    arr[0][1] = array[0][1];
    arr[0][2] = array[0][2];
    arr[0][3] = array[0][3];
    arr[1][0] = array[1][1];
    arr[1][1] = array[1][2];
    arr[1][2] = array[1][3];
    arr[1][3] = array[1][0];
    arr[2][0] = array[2][2];
    arr[2][1] = array[2][3];
    arr[2][2] = array[2][0];
    arr[2][3] = array[2][1];
    arr[3][0] = array[3][3];
    arr[3][1] = array[3][0];
    arr[3][2] = array[3][1];
    arr[3][3] = array[3][2];
}
void step_3(unsigned char arr[4][4])
{

    unsigned char array[4][4];
    unsigned char col[4];
    unsigned char new_col[4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array[i][j] = arr[i][j];
        }
    }
    arr[0][0] =
        ((array[0][0] << 1) ^ ((array[0][0] & 0x80) ? 0x1b : 0x00)) ^ (((array[1][0] << 1) ^ ((array[1][0] & 0x80) ? 0x1b : 0x00)) ^ array[1][0]) ^ array[2][0] ^ array[3][0];

    arr[1][0] =
        array[0][0] ^ ((array[1][0] << 1) ^ ((array[1][0] & 0x80) ? 0x1b : 0x00)) ^ (((array[2][0] << 1) ^ ((array[2][0] & 0x80) ? 0x1b : 0x00)) ^ array[2][0]) ^ array[3][0];

    arr[2][0] =
        array[0][0] ^ array[1][0] ^ ((array[2][0] << 1) ^ ((array[2][0] & 0x80) ? 0x1b : 0x00)) ^ (((array[3][0] << 1) ^ ((array[3][0] & 0x80) ? 0x1b : 0x00)) ^ array[3][0]);

    arr[3][0] =
        (((array[0][0] << 1) ^ ((array[0][0] & 0x80) ? 0x1b : 0x00)) ^ array[0][0]) ^ array[1][0] ^ array[2][0] ^ ((array[3][0] << 1) ^ ((array[3][0] & 0x80) ? 0x1b : 0x00));

    arr[0][1] =
        ((array[0][1] << 1) ^ ((array[0][1] & 0x80) ? 0x1b : 0x00)) ^ (((array[1][1] << 1) ^ ((array[1][1] & 0x80) ? 0x1b : 0x00)) ^ array[1][1]) ^ array[2][1] ^ array[3][1];

    arr[1][1] =
        array[0][1] ^ ((array[1][1] << 1) ^ ((array[1][1] & 0x80) ? 0x1b : 0x00)) ^ (((array[2][1] << 1) ^ ((array[2][1] & 0x80) ? 0x1b : 0x00)) ^ array[2][1]) ^ array[3][1];

    arr[2][1] =
        array[0][1] ^ array[1][1] ^ ((array[2][1] << 1) ^ ((array[2][1] & 0x80) ? 0x1b : 0x00)) ^ (((array[3][1] << 1) ^ ((array[3][1] & 0x80) ? 0x1b : 0x00)) ^ array[3][1]);

    arr[3][1] =
        (((array[0][1] << 1) ^ ((array[0][1] & 0x80) ? 0x1b : 0x00)) ^ array[0][1]) ^ array[1][1] ^ array[2][1] ^ ((array[3][1] << 1) ^ ((array[3][1] & 0x80) ? 0x1b : 0x00));

    arr[0][2] =
        ((array[0][2] << 1) ^ ((array[0][2] & 0x80) ? 0x1b : 0x00)) ^ (((array[1][2] << 1) ^ ((array[1][2] & 0x80) ? 0x1b : 0x00)) ^ array[1][2]) ^ array[2][2] ^ array[3][2];

    arr[1][2] =
        array[0][2] ^ ((array[1][2] << 1) ^ ((array[1][2] & 0x80) ? 0x1b : 0x00)) ^ (((array[2][2] << 1) ^ ((array[2][2] & 0x80) ? 0x1b : 0x00)) ^ array[2][2]) ^ array[3][2];

    arr[2][2] =
        array[0][2] ^ array[1][2] ^ ((array[2][2] << 1) ^ ((array[2][2] & 0x80) ? 0x1b : 0x00)) ^ (((array[3][2] << 1) ^ ((array[3][2] & 0x80) ? 0x1b : 0x00)) ^ array[3][2]);

    arr[3][2] =
        (((array[0][2] << 1) ^ ((array[0][2] & 0x80) ? 0x1b : 0x00)) ^ array[0][2]) ^ array[1][2] ^ array[2][2] ^ ((array[3][2] << 1) ^ ((array[3][2] & 0x80) ? 0x1b : 0x00));

    arr[0][3] =
        ((array[0][3] << 1) ^ ((array[0][3] & 0x80) ? 0x1b : 0x00)) ^ (((array[1][3] << 1) ^ ((array[1][3] & 0x80) ? 0x1b : 0x00)) ^ array[1][3]) ^ array[2][3] ^ array[3][3];

    arr[1][3] =
        array[0][3] ^ ((array[1][3] << 1) ^ ((array[1][3] & 0x80) ? 0x1b : 0x00)) ^ (((array[2][3] << 1) ^ ((array[2][3] & 0x80) ? 0x1b : 0x00)) ^ array[2][3]) ^ array[3][3];

    arr[2][3] =
        array[0][3] ^ array[1][3] ^ ((array[2][3] << 1) ^ ((array[2][3] & 0x80) ? 0x1b : 0x00)) ^ (((array[3][3] << 1) ^ ((array[3][3] & 0x80) ? 0x1b : 0x00)) ^ array[3][3]);

    arr[3][3] =
        (((array[0][3] << 1) ^ ((array[0][3] & 0x80) ? 0x1b : 0x00)) ^ array[0][3]) ^ array[1][3] ^ array[2][3] ^ ((array[3][3] << 1) ^ ((array[3][3] & 0x80) ? 0x1b : 0x00));
}
void step_4(unsigned char arr[4][4], unsigned char key[16])
{
    unsigned char keys[4][4];
    keys[0][0] = key[0];
    keys[0][1] = key[1];
    keys[0][2] = key[2];
    keys[0][3] = key[3];
    keys[1][0] = key[4];
    keys[1][1] = key[5];
    keys[1][2] = key[6];
    keys[1][3] = key[7];
    keys[2][0] = key[8];
    keys[2][1] = key[9];
    keys[2][2] = key[10];
    keys[2][3] = key[11];
    keys[3][0] = key[12];
    keys[3][1] = key[13];
    keys[3][2] = key[14];
    keys[3][3] = key[15];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr[i][j] ^= keys[i][j];
        }
    }
}
void Decoding_Step_1(unsigned char arr[4][4])
{
    unsigned char array[4][4] = {{}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array[i][j] = arr[i][j];
        }
    }

    arr[1][0] = array[1][3];
    arr[1][1] = array[1][0];
    arr[1][2] = array[1][1];
    arr[1][3] = array[1][2];
    arr[2][0] = array[2][2];
    arr[2][1] = array[2][3];
    arr[2][2] = array[2][0];
    arr[2][3] = array[2][1];
    arr[3][0] = array[3][1];
    arr[3][1] = array[3][2];
    arr[3][2] = array[3][3];
    arr[3][3] = array[3][0];
}

void Decoding_Step_2(unsigned char arr[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            switch (arr[i][j])
            {
            case 0x00:
                arr[i][j] = 0x52;
                break;
            case 0x01:
                arr[i][j] = 0x09;
                break;
            case 0x02:
                arr[i][j] = 0x6A;
                break;
            case 0x03:
                arr[i][j] = 0xD5;
                break;
            case 0x04:
                arr[i][j] = 0x30;
                break;
            case 0x05:
                arr[i][j] = 0x36;
                break;
            case 0x06:
                arr[i][j] = 0xA5;
                break;
            case 0x07:
                arr[i][j] = 0x38;
                break;
            case 0x08:
                arr[i][j] = 0xBF;
                break;
            case 0x09:
                arr[i][j] = 0x40;
                break;
            case 0x0A:
                arr[i][j] = 0xA3;
                break;
            case 0x0B:
                arr[i][j] = 0x9E;
                break;
            case 0x0C:
                arr[i][j] = 0x81;
                break;
            case 0x0D:
                arr[i][j] = 0xF3;
                break;
            case 0x0E:
                arr[i][j] = 0xD7;
                break;
            case 0x0F:
                arr[i][j] = 0xFB;
                break;

            case 0x10:
                arr[i][j] = 0x7C;
                break;
            case 0x11:
                arr[i][j] = 0xE3;
                break;
            case 0x12:
                arr[i][j] = 0x39;
                break;
            case 0x13:
                arr[i][j] = 0x82;
                break;
            case 0x14:
                arr[i][j] = 0x9B;
                break;
            case 0x15:
                arr[i][j] = 0x2F;
                break;
            case 0x16:
                arr[i][j] = 0xFF;
                break;
            case 0x17:
                arr[i][j] = 0x87;
                break;
            case 0x18:
                arr[i][j] = 0x34;
                break;
            case 0x19:
                arr[i][j] = 0x8E;
                break;
            case 0x1A:
                arr[i][j] = 0x43;
                break;
            case 0x1B:
                arr[i][j] = 0x44;
                break;
            case 0x1C:
                arr[i][j] = 0xC4;
                break;
            case 0x1D:
                arr[i][j] = 0xDE;
                break;
            case 0x1E:
                arr[i][j] = 0xE9;
                break;
            case 0x1F:
                arr[i][j] = 0xCB;
                break;

            case 0x20:
                arr[i][j] = 0x54;
                break;
            case 0x21:
                arr[i][j] = 0x7B;
                break;
            case 0x22:
                arr[i][j] = 0x94;
                break;
            case 0x23:
                arr[i][j] = 0x32;
                break;
            case 0x24:
                arr[i][j] = 0xA6;
                break;
            case 0x25:
                arr[i][j] = 0xC2;
                break;
            case 0x26:
                arr[i][j] = 0x23;
                break;
            case 0x27:
                arr[i][j] = 0x3D;
                break;
            case 0x28:
                arr[i][j] = 0xEE;
                break;
            case 0x29:
                arr[i][j] = 0x4C;
                break;
            case 0x2A:
                arr[i][j] = 0x95;
                break;
            case 0x2B:
                arr[i][j] = 0x0B;
                break;
            case 0x2C:
                arr[i][j] = 0x42;
                break;
            case 0x2D:
                arr[i][j] = 0xFA;
                break;
            case 0x2E:
                arr[i][j] = 0xC3;
                break;
            case 0x2F:
                arr[i][j] = 0x4E;
                break;

            case 0x30:
                arr[i][j] = 0x08;
                break;
            case 0x31:
                arr[i][j] = 0x2E;
                break;
            case 0x32:
                arr[i][j] = 0xA1;
                break;
            case 0x33:
                arr[i][j] = 0x66;
                break;
            case 0x34:
                arr[i][j] = 0x28;
                break;
            case 0x35:
                arr[i][j] = 0xD9;
                break;
            case 0x36:
                arr[i][j] = 0x24;
                break;
            case 0x37:
                arr[i][j] = 0xB2;
                break;
            case 0x38:
                arr[i][j] = 0x76;
                break;
            case 0x39:
                arr[i][j] = 0x5B;
                break;
            case 0x3A:
                arr[i][j] = 0xA2;
                break;
            case 0x3B:
                arr[i][j] = 0x49;
                break;
            case 0x3C:
                arr[i][j] = 0x6D;
                break;
            case 0x3D:
                arr[i][j] = 0x8B;
                break;
            case 0x3E:
                arr[i][j] = 0xD1;
                break;
            case 0x3F:
                arr[i][j] = 0x25;
                break;

            case 0x40:
                arr[i][j] = 0x72;
                break;
            case 0x41:
                arr[i][j] = 0xF8;
                break;
            case 0x42:
                arr[i][j] = 0xF6;
                break;
            case 0x43:
                arr[i][j] = 0x64;
                break;
            case 0x44:
                arr[i][j] = 0x86;
                break;
            case 0x45:
                arr[i][j] = 0x68;
                break;
            case 0x46:
                arr[i][j] = 0x98;
                break;
            case 0x47:
                arr[i][j] = 0x16;
                break;
            case 0x48:
                arr[i][j] = 0xD4;
                break;
            case 0x49:
                arr[i][j] = 0xA4;
                break;
            case 0x4A:
                arr[i][j] = 0x5C;
                break;
            case 0x4B:
                arr[i][j] = 0xCC;
                break;
            case 0x4C:
                arr[i][j] = 0x5D;
                break;
            case 0x4D:
                arr[i][j] = 0x65;
                break;
            case 0x4E:
                arr[i][j] = 0xB6;
                break;
            case 0x4F:
                arr[i][j] = 0x92;
                break;

            case 0x50:
                arr[i][j] = 0x6C;
                break;
            case 0x51:
                arr[i][j] = 0x70;
                break;
            case 0x52:
                arr[i][j] = 0x48;
                break;
            case 0x53:
                arr[i][j] = 0x50;
                break;
            case 0x54:
                arr[i][j] = 0xFD;
                break;
            case 0x55:
                arr[i][j] = 0xED;
                break;
            case 0x56:
                arr[i][j] = 0xB9;
                break;
            case 0x57:
                arr[i][j] = 0xDA;
                break;
            case 0x58:
                arr[i][j] = 0x5E;
                break;
            case 0x59:
                arr[i][j] = 0x15;
                break;
            case 0x5A:
                arr[i][j] = 0x46;
                break;
            case 0x5B:
                arr[i][j] = 0x57;
                break;
            case 0x5C:
                arr[i][j] = 0xA7;
                break;
            case 0x5D:
                arr[i][j] = 0x8D;
                break;
            case 0x5E:
                arr[i][j] = 0x9D;
                break;
            case 0x5F:
                arr[i][j] = 0x84;
                break;

            case 0x60:
                arr[i][j] = 0x90;
                break;
            case 0x61:
                arr[i][j] = 0xD8;
                break;
            case 0x62:
                arr[i][j] = 0xAB;
                break;
            case 0x63:
                arr[i][j] = 0x00;
                break;
            case 0x64:
                arr[i][j] = 0x8C;
                break;
            case 0x65:
                arr[i][j] = 0xBC;
                break;
            case 0x66:
                arr[i][j] = 0xD3;
                break;
            case 0x67:
                arr[i][j] = 0x0A;
                break;
            case 0x68:
                arr[i][j] = 0xF7;
                break;
            case 0x69:
                arr[i][j] = 0xE4;
                break;
            case 0x6A:
                arr[i][j] = 0x58;
                break;
            case 0x6B:
                arr[i][j] = 0x05;
                break;
            case 0x6C:
                arr[i][j] = 0xB8;
                break;
            case 0x6D:
                arr[i][j] = 0xB3;
                break;
            case 0x6E:
                arr[i][j] = 0x45;
                break;
            case 0x6F:
                arr[i][j] = 0x06;
                break;

            case 0x70:
                arr[i][j] = 0xD0;
                break;
            case 0x71:
                arr[i][j] = 0x2C;
                break;
            case 0x72:
                arr[i][j] = 0x1E;
                break;
            case 0x73:
                arr[i][j] = 0x8F;
                break;
            case 0x74:
                arr[i][j] = 0xCA;
                break;
            case 0x75:
                arr[i][j] = 0x3F;
                break;
            case 0x76:
                arr[i][j] = 0x0F;
                break;
            case 0x77:
                arr[i][j] = 0x02;
                break;
            case 0x78:
                arr[i][j] = 0xC1;
                break;
            case 0x79:
                arr[i][j] = 0xAF;
                break;
            case 0x7A:
                arr[i][j] = 0xBD;
                break;
            case 0x7B:
                arr[i][j] = 0x03;
                break;
            case 0x7C:
                arr[i][j] = 0x01;
                break;
            case 0x7D:
                arr[i][j] = 0x13;
                break;
            case 0x7E:
                arr[i][j] = 0x8A;
                break;
            case 0x7F:
                arr[i][j] = 0x6B;
                break;

            case 0x80:
                arr[i][j] = 0x3A;
                break;
            case 0x81:
                arr[i][j] = 0x91;
                break;
            case 0x82:
                arr[i][j] = 0x11;
                break;
            case 0x83:
                arr[i][j] = 0x41;
                break;
            case 0x84:
                arr[i][j] = 0x4F;
                break;
            case 0x85:
                arr[i][j] = 0x67;
                break;
            case 0x86:
                arr[i][j] = 0xDC;
                break;
            case 0x87:
                arr[i][j] = 0xEA;
                break;
            case 0x88:
                arr[i][j] = 0x97;
                break;
            case 0x89:
                arr[i][j] = 0xF2;
                break;
            case 0x8A:
                arr[i][j] = 0xCF;
                break;
            case 0x8B:
                arr[i][j] = 0xCE;
                break;
            case 0x8C:
                arr[i][j] = 0xF0;
                break;
            case 0x8D:
                arr[i][j] = 0xB4;
                break;
            case 0x8E:
                arr[i][j] = 0xE6;
                break;
            case 0x8F:
                arr[i][j] = 0x73;
                break;

            case 0x90:
                arr[i][j] = 0x96;
                break;
            case 0x91:
                arr[i][j] = 0xAC;
                break;
            case 0x92:
                arr[i][j] = 0x74;
                break;
            case 0x93:
                arr[i][j] = 0x22;
                break;
            case 0x94:
                arr[i][j] = 0xE7;
                break;
            case 0x95:
                arr[i][j] = 0xAD;
                break;
            case 0x96:
                arr[i][j] = 0x35;
                break;
            case 0x97:
                arr[i][j] = 0x85;
                break;
            case 0x98:
                arr[i][j] = 0xE2;
                break;
            case 0x99:
                arr[i][j] = 0xF9;
                break;
            case 0x9A:
                arr[i][j] = 0x37;
                break;
            case 0x9B:
                arr[i][j] = 0xE8;
                break;
            case 0x9C:
                arr[i][j] = 0x1C;
                break;
            case 0x9D:
                arr[i][j] = 0x75;
                break;
            case 0x9E:
                arr[i][j] = 0xDF;
                break;
            case 0x9F:
                arr[i][j] = 0x6E;
                break;

            case 0xA0:
                arr[i][j] = 0x47;
                break;
            case 0xA1:
                arr[i][j] = 0xF1;
                break;
            case 0xA2:
                arr[i][j] = 0x1A;
                break;
            case 0xA3:
                arr[i][j] = 0x71;
                break;
            case 0xA4:
                arr[i][j] = 0x1D;
                break;
            case 0xA5:
                arr[i][j] = 0x29;
                break;
            case 0xA6:
                arr[i][j] = 0xC5;
                break;
            case 0xA7:
                arr[i][j] = 0x89;
                break;
            case 0xA8:
                arr[i][j] = 0x6F;
                break;
            case 0xA9:
                arr[i][j] = 0xB7;
                break;
            case 0xAA:
                arr[i][j] = 0x62;
                break;
            case 0xAB:
                arr[i][j] = 0x0E;
                break;
            case 0xAC:
                arr[i][j] = 0xAA;
                break;
            case 0xAD:
                arr[i][j] = 0x18;
                break;
            case 0xAE:
                arr[i][j] = 0xBE;
                break;
            case 0xAF:
                arr[i][j] = 0x1B;
                break;

            case 0xB0:
                arr[i][j] = 0xFC;
                break;
            case 0xB1:
                arr[i][j] = 0x56;
                break;
            case 0xB2:
                arr[i][j] = 0x3E;
                break;
            case 0xB3:
                arr[i][j] = 0x4B;
                break;
            case 0xB4:
                arr[i][j] = 0xC6;
                break;
            case 0xB5:
                arr[i][j] = 0xD2;
                break;
            case 0xB6:
                arr[i][j] = 0x79;
                break;
            case 0xB7:
                arr[i][j] = 0x20;
                break;
            case 0xB8:
                arr[i][j] = 0x9A;
                break;
            case 0xB9:
                arr[i][j] = 0xDB;
                break;
            case 0xBA:
                arr[i][j] = 0xC0;
                break;
            case 0xBB:
                arr[i][j] = 0xFE;
                break;
            case 0xBC:
                arr[i][j] = 0x78;
                break;
            case 0xBD:
                arr[i][j] = 0xCD;
                break;
            case 0xBE:
                arr[i][j] = 0x5A;
                break;
            case 0xBF:
                arr[i][j] = 0xF4;
                break;

            case 0xC0:
                arr[i][j] = 0x1F;
                break;
            case 0xC1:
                arr[i][j] = 0xDD;
                break;
            case 0xC2:
                arr[i][j] = 0xA8;
                break;
            case 0xC3:
                arr[i][j] = 0x33;
                break;
            case 0xC4:
                arr[i][j] = 0x88;
                break;
            case 0xC5:
                arr[i][j] = 0x07;
                break;
            case 0xC6:
                arr[i][j] = 0xC7;
                break;
            case 0xC7:
                arr[i][j] = 0x31;
                break;
            case 0xC8:
                arr[i][j] = 0xB1;
                break;
            case 0xC9:
                arr[i][j] = 0x12;
                break;
            case 0xCA:
                arr[i][j] = 0x10;
                break;
            case 0xCB:
                arr[i][j] = 0x59;
                break;
            case 0xCC:
                arr[i][j] = 0x27;
                break;
            case 0xCD:
                arr[i][j] = 0x80;
                break;
            case 0xCE:
                arr[i][j] = 0xEC;
                break;
            case 0xCF:
                arr[i][j] = 0x5F;
                break;

            case 0xD0:
                arr[i][j] = 0x60;
                break;
            case 0xD1:
                arr[i][j] = 0x51;
                break;
            case 0xD2:
                arr[i][j] = 0x7F;
                break;
            case 0xD3:
                arr[i][j] = 0xA9;
                break;
            case 0xD4:
                arr[i][j] = 0x19;
                break;
            case 0xD5:
                arr[i][j] = 0xB5;
                break;
            case 0xD6:
                arr[i][j] = 0x4A;
                break;
            case 0xD7:
                arr[i][j] = 0x0D;
                break;
            case 0xD8:
                arr[i][j] = 0x2D;
                break;
            case 0xD9:
                arr[i][j] = 0xE5;
                break;
            case 0xDA:
                arr[i][j] = 0x7A;
                break;
            case 0xDB:
                arr[i][j] = 0x9F;
                break;
            case 0xDC:
                arr[i][j] = 0x93;
                break;
            case 0xDD:
                arr[i][j] = 0xC9;
                break;
            case 0xDE:
                arr[i][j] = 0x9C;
                break;
            case 0xDF:
                arr[i][j] = 0xEF;
                break;

            case 0xE0:
                arr[i][j] = 0xA0;
                break;
            case 0xE1:
                arr[i][j] = 0xE0;
                break;
            case 0xE2:
                arr[i][j] = 0x3B;
                break;
            case 0xE3:
                arr[i][j] = 0x4D;
                break;
            case 0xE4:
                arr[i][j] = 0xAE;
                break;
            case 0xE5:
                arr[i][j] = 0x2A;
                break;
            case 0xE6:
                arr[i][j] = 0xF5;
                break;
            case 0xE7:
                arr[i][j] = 0xB0;
                break;
            case 0xE8:
                arr[i][j] = 0xC8;
                break;
            case 0xE9:
                arr[i][j] = 0xEB;
                break;
            case 0xEA:
                arr[i][j] = 0xBB;
                break;
            case 0xEB:
                arr[i][j] = 0x3C;
                break;
            case 0xEC:
                arr[i][j] = 0x83;
                break;
            case 0xED:
                arr[i][j] = 0x53;
                break;
            case 0xEE:
                arr[i][j] = 0x99;
                break;
            case 0xEF:
                arr[i][j] = 0x61;
                break;

            case 0xF0:
                arr[i][j] = 0x17;
                break;
            case 0xF1:
                arr[i][j] = 0x2B;
                break;
            case 0xF2:
                arr[i][j] = 0x04;
                break;
            case 0xF3:
                arr[i][j] = 0x7E;
                break;
            case 0xF4:
                arr[i][j] = 0xBA;
                break;
            case 0xF5:
                arr[i][j] = 0x77;
                break;
            case 0xF6:
                arr[i][j] = 0xD6;
                break;
            case 0xF7:
                arr[i][j] = 0x26;
                break;
            case 0xF8:
                arr[i][j] = 0xE1;
                break;
            case 0xF9:
                arr[i][j] = 0x69;
                break;
            case 0xFA:
                arr[i][j] = 0x14;
                break;
            case 0xFB:
                arr[i][j] = 0x63;
                break;
            case 0xFC:
                arr[i][j] = 0x55;
                break;
            case 0xFD:
                arr[i][j] = 0x21;
                break;
            case 0xFE:
                arr[i][j] = 0x0C;
                break;
            case 0xFF:
                arr[i][j] = 0x7D;
                break;
            }
        }
    }
}
unsigned char X(unsigned char array)
{
    unsigned char final = (array << 1 ^ ((array & 0x80) ? 0x1b : 0x00));
    return final;
}

void Decoding_Step_3(unsigned char arr[4][4])
{
    unsigned char array[4][4] = {{}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array[i][j] = arr[i][j];
        }
    }

    arr[0][0] = (X(X(X(array[0][0]))) ^ X(X(array[0][0])) ^ X(array[0][0])) ^ (X(X(X(array[1][0]))) ^ X(array[1][0]) ^ array[1][0]) ^ (X(X(X(array[2][0]))) ^ X(X(array[2][0])) ^ array[2][0]) ^ (X(X(X(array[3][0]))) ^ array[3][0]);
    arr[1][0] = (X(X(X(array[0][0]))) ^ array[0][0]) ^ (X(X(X(array[1][0]))) ^ X(X(array[1][0])) ^ X(array[1][0])) ^ (X(X(X(array[2][0]))) ^ X(array[2][0]) ^ array[2][0]) ^ (X(X(X(array[3][0]))) ^ X(X(array[3][0])) ^ array[3][0]);
    arr[2][0] = (X(X(X(array[0][0]))) ^ X(X(array[0][0])) ^ array[0][0]) ^ (X(X(X(array[1][0]))) ^ array[1][0]) ^ (X(X(X(array[2][0]))) ^ X(X(array[2][0])) ^ X(array[2][0])) ^ (X(X(X(array[3][0]))) ^ X(array[3][0]) ^ array[3][0]);
    arr[3][0] = (X(X(X(array[0][0]))) ^ X(array[0][0]) ^ array[0][0]) ^ (X(X(X(array[1][0]))) ^ X(X(array[1][0])) ^ array[1][0]) ^ (X(X(X(array[2][0]))) ^ array[2][0]) ^ (X(X(X(array[3][0]))) ^ X(X(array[3][0])) ^ X(array[3][0]));
    arr[0][1] = (X(X(X(array[0][1]))) ^ X(X(array[0][1])) ^ X(array[0][1])) ^ (X(X(X(array[1][1]))) ^ X(array[1][1]) ^ array[1][1]) ^ (X(X(X(array[2][1]))) ^ X(X(array[2][1])) ^ array[2][1]) ^ (X(X(X(array[3][1]))) ^ array[3][1]);
    arr[1][1] = (X(X(X(array[0][1]))) ^ array[0][1]) ^ (X(X(X(array[1][1]))) ^ X(X(array[1][1])) ^ X(array[1][1])) ^ (X(X(X(array[2][1]))) ^ X(array[2][1]) ^ array[2][1]) ^ (X(X(X(array[3][1]))) ^ X(X(array[3][1])) ^ array[3][1]);
    arr[2][1] = (X(X(X(array[0][1]))) ^ X(X(array[0][1])) ^ array[0][1]) ^ (X(X(X(array[1][1]))) ^ array[1][1]) ^ (X(X(X(array[2][1]))) ^ X(X(array[2][1])) ^ X(array[2][1])) ^ (X(X(X(array[3][1]))) ^ X(array[3][1]) ^ array[3][1]);
    arr[3][1] = (X(X(X(array[0][1]))) ^ X(array[0][1]) ^ array[0][1]) ^ (X(X(X(array[1][1]))) ^ X(X(array[1][1])) ^ array[1][1]) ^ (X(X(X(array[2][1]))) ^ array[2][1]) ^ (X(X(X(array[3][1]))) ^ X(X(array[3][1])) ^ X(array[3][1]));
    arr[0][2] = (X(X(X(array[0][2]))) ^ X(X(array[0][2])) ^ X(array[0][2])) ^ (X(X(X(array[1][2]))) ^ X(array[1][2]) ^ array[1][2]) ^ (X(X(X(array[2][2]))) ^ X(X(array[2][2])) ^ array[2][2]) ^ (X(X(X(array[3][2]))) ^ array[3][2]);
    arr[1][2] = (X(X(X(array[0][2]))) ^ array[0][2]) ^ (X(X(X(array[1][2]))) ^ X(X(array[1][2])) ^ X(array[1][2])) ^ (X(X(X(array[2][2]))) ^ X(array[2][2]) ^ array[2][2]) ^ (X(X(X(array[3][2]))) ^ X(X(array[3][2])) ^ array[3][2]);
    arr[2][2] = (X(X(X(array[0][2]))) ^ X(X(array[0][2])) ^ array[0][2]) ^ (X(X(X(array[1][2]))) ^ array[1][2]) ^ (X(X(X(array[2][2]))) ^ X(X(array[2][2])) ^ X(array[2][2])) ^ (X(X(X(array[3][2]))) ^ X(array[3][2]) ^ array[3][2]);
    arr[3][2] = (X(X(X(array[0][2]))) ^ X(array[0][2]) ^ array[0][2]) ^ (X(X(X(array[1][2]))) ^ X(X(array[1][2])) ^ array[1][2]) ^ (X(X(X(array[2][2]))) ^ array[2][2]) ^ (X(X(X(array[3][2]))) ^ X(X(array[3][2])) ^ X(array[3][2]));
    arr[0][3] = (X(X(X(array[0][3]))) ^ X(X(array[0][3])) ^ X(array[0][3])) ^ (X(X(X(array[1][3]))) ^ X(array[1][3]) ^ array[1][3]) ^ (X(X(X(array[2][3]))) ^ X(X(array[2][3])) ^ array[2][3]) ^ (X(X(X(array[3][3]))) ^ array[3][3]);
    arr[1][3] = (X(X(X(array[0][3]))) ^ array[0][3]) ^ (X(X(X(array[1][3]))) ^ X(X(array[1][3])) ^ X(array[1][3])) ^ (X(X(X(array[2][3]))) ^ X(array[2][3]) ^ array[2][3]) ^ (X(X(X(array[3][3]))) ^ X(X(array[3][3])) ^ array[3][3]);
    arr[2][3] = (X(X(X(array[0][3]))) ^ X(X(array[0][3])) ^ array[0][3]) ^ (X(X(X(array[1][3]))) ^ array[1][3]) ^ (X(X(X(array[2][3]))) ^ X(X(array[2][3])) ^ X(array[2][3])) ^ (X(X(X(array[3][3]))) ^ X(array[3][3]) ^ array[3][3]);
    arr[3][3] = (X(X(X(array[0][3]))) ^ X(array[0][3]) ^ array[0][3]) ^ (X(X(X(array[1][3]))) ^ X(X(array[1][3])) ^ array[1][3]) ^ (X(X(X(array[2][3]))) ^ array[2][3]) ^ (X(X(X(array[3][3]))) ^ X(X(array[3][3])) ^ X(array[3][3]));
}
void Decoding_Step_4(unsigned char array[4][4], unsigned char key[17])
{
    unsigned char keys[4][4];

    keys[0][0] = key[15];
    keys[0][1] = key[14];
    keys[0][2] = key[13];
    keys[0][3] = key[12];
    keys[1][0] = key[11];
    keys[1][1] = key[10];
    keys[1][2] = key[9];
    keys[1][3] = key[8];
    keys[2][0] = key[7];
    keys[2][1] = key[6];
    keys[2][2] = key[5];
    keys[2][3] = key[4];
    keys[3][0] = key[3];
    keys[3][1] = key[2];
    keys[3][2] = key[1];
    keys[3][3] = key[0];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array[i][j] ^= keys[i][j];
        }
    }
}
void Vigenere_Encryption(char *str, int key)
{
    char Encrypted_Text[10000];
    for (int i = 0; i < 999; i++)
    {
        Encrypted_Text[i] = str[i] + key;
    }
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", Encrypted_Text[i]);
    }
}

void Vigenere_Decryption(char *str, int key)
{
    char Decrypted_Text[10000];
    for (int i = 0; i < 999; i++)
    {
        Decrypted_Text[i] = str[i] - key;
    }
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", Decrypted_Text[i]);
    }
}
int main()
{ // main
    printf("If you want to encrypt the text press 'E' and for deccryption press'D'\n");
    char a;
    scanf("%c", &a);
    getchar();
    if (a == 'E')
    { // if statement for encryption
        printf("If you want to use classical cipher press'C' or for aes 128 press'A'\n");
        char Classic_aes;
        scanf("%c", &Classic_aes);
        if (Classic_aes == 'C')
        { // for classical cipher encoding
            printf("Enter key\n");
            int n;
            scanf("%d", &n);
            printf("If you are entering text press 'T' for file.txt press 'F'\n");
            char b;
            scanf("%c/n", &b);
            getchar();
            if (b == 'T')
            { // if statement for text
                char str[1000];
                printf("Enter the text\n");
                gets(str);
                Vingere_Encryption(*str, n);
            } // if statement for text
            else if (b == 'F')
            { // else for file in classic
                printf("Enter the file name :\n");
                char file_name[1000];
                gets(file_name);
                FILE *fp = NULL;
                char str[10000];
                fp = fopen(file_name, "r");
                if (fp == NULL)
                { // if statement for file pointer to be null
                    printf("Error");
                    exit(1);
                } // if statement for file pointer to be null
                int k = 0;
                while (!feof(fp))
                {
                    str[k] = fgetc(fp + k);
                    k++;
                }
                Vingere_Encryption(*file_name, n);
            } // else for file in classic

        } // for classical cipher encoding
        else if (Classic_aes == 'A')
        { // else for aes encryption
            printf("Enter key\n");
            char key[16];
            gets(key);
            printf("If you are entering text press 'T' for file.txt press 'F'\n");
            char b;
            scanf("%c/n", &b);
            getchar();
            if (b == 'T')
            { // if statement for text
                char str[1000];
                printf("Enter the text\n");
                gets(str);
                int i = strlen(str);
                int l = i / 16;
                unsigned char arr[4][4];
                for (int i = 0; i < l; i++)
                { // assigning string to array
                    arr[0][0] = *(str + (15 * i));
                    arr[1][0] = *(str + ((15 * i) + 1));
                    arr[2][0] = *(str + ((15 * i) + 2));
                    arr[3][0] = *(str + ((15 * i) + 3));

                    arr[0][1] = *(str + ((15 * i) + 4));
                    arr[1][1] = *(str + ((15 * i) + 5));
                    arr[2][1] = *(str + ((15 * i) + 6));
                    arr[3][1] = *(str + ((15 * i) + 7));

                    arr[0][2] = *(str + ((15 * i) + 8));
                    arr[1][2] = *(str + ((15 * i) + 9));
                    arr[2][2] = *(str + ((15 * i) + 10));
                    arr[3][2] = *(str + ((15 * i) + 11));

                    arr[0][3] = *(str + ((15 * i) + 12));
                    arr[1][3] = *(str + ((15 * i) + 13));
                    arr[2][3] = *(str + ((15 * i) + 14));
                    arr[3][3] = *(str + ((15 * i) + 15));

                    int j = 0;
                    step_4(arr, key);
                    while (j < 9)
                    {
                        step_1(arr);
                        step_2(arr);
                        step_3(arr);
                        step_4(arr, key);
                        j++;
                    }

                    step_1(arr);
                    step_2(arr);
                    step_4(arr, key);

                    for (int i = 0; i < 4; i++)
                    {
                        for (int j = 0; j < 4; j++)
                        {
                            printf("%02x", arr[i][j]);
                        }
                    }
                } // assigning string to array
                int pkcs = i % 16;

                unsigned char array[4][4];
                switch (pkcs)
                { // switch
                case 1:
                    array[0][0] = *(str + i - 1);
                    array[0][1] = 0x0F;
                    array[0][2] = 0x0F;
                    array[0][3] = 0x0F;
                    array[1][0] = 0x0F;
                    array[1][1] = 0x0F;
                    array[1][2] = 0x0F;
                    array[1][3] = 0x0F;
                    array[2][0] = 0x0F;
                    array[2][1] = 0x0F;
                    array[2][2] = 0x0F;
                    array[2][3] = 0x0F;
                    array[3][0] = 0x0F;
                    array[3][1] = 0x0F;
                    array[3][2] = 0x0F;
                    array[3][3] = 0x0F;
                    break;
                case 2:
                    array[0][0] = *(str + i - 2);
                    array[0][1] = *(str + i - 1);
                    array[0][2] = 0x0E;
                    array[0][3] = 0x0E;
                    array[1][0] = 0x0E;
                    array[1][1] = 0x0E;
                    array[1][2] = 0x0E;
                    array[1][3] = 0x0E;
                    array[2][0] = 0x0E;
                    array[2][1] = 0x0E;
                    array[2][2] = 0x0E;
                    array[2][3] = 0x0E;
                    array[3][0] = 0x0E;
                    array[3][1] = 0x0E;
                    array[3][2] = 0x0E;
                    array[3][3] = 0x0E;
                    break;
                case 3:
                    array[0][0] = *(str + i - 3);
                    array[0][1] = *(str + i - 2);
                    array[0][2] = *(str + i - 1);
                    array[0][3] = 0x0D;
                    array[1][0] = 0x0D;
                    array[1][1] = 0x0D;
                    array[1][2] = 0x0D;
                    array[1][3] = 0x0D;
                    array[2][0] = 0x0D;
                    array[2][1] = 0x0D;
                    array[2][2] = 0x0D;
                    array[2][3] = 0x0D;
                    array[3][0] = 0x0D;
                    array[3][1] = 0x0D;
                    array[3][2] = 0x0D;
                    array[3][3] = 0x0D;
                    break;
                case 4:
                    array[0][0] = *(str + i - 4);
                    array[0][1] = *(str + i - 3);
                    array[0][2] = *(str + i - 2);
                    array[0][3] = *(str + i - 1);
                    array[1][0] = 0x0C;
                    array[1][1] = 0x0C;
                    array[1][2] = 0x0C;
                    array[1][3] = 0x0C;
                    array[2][0] = 0x0C;
                    array[2][1] = 0x0C;
                    array[2][2] = 0x0C;
                    array[2][3] = 0x0C;
                    array[3][0] = 0x0C;
                    array[3][1] = 0x0C;
                    array[3][2] = 0x0C;
                    array[3][3] = 0x0C;
                    break;
                case 5:
                    array[0][0] = *(str + i - 5);
                    array[0][1] = *(str + i - 4);
                    array[0][2] = *(str + i - 3);
                    array[0][3] = *(str + i - 2);
                    array[1][0] = *(str + i - 1);
                    array[1][1] = 0x0B;
                    array[1][2] = 0x0B;
                    array[1][3] = 0x0B;
                    array[2][0] = 0x0B;
                    array[2][1] = 0x0B;
                    array[2][2] = 0x0B;
                    array[2][3] = 0x0B;
                    array[3][0] = 0x0B;
                    array[3][1] = 0x0B;
                    array[3][2] = 0x0B;
                    array[3][3] = 0x0B;
                    break;
                case 6:
                    array[0][0] = *(str + i - 6);
                    array[0][1] = *(str + i - 5);
                    array[0][2] = *(str + i - 4);
                    array[0][3] = *(str + i - 3);
                    array[1][0] = *(str + i - 2);
                    array[1][1] = *(str + i - 1);
                    array[1][2] = 0x0A;
                    array[1][3] = 0x0A;
                    array[2][0] = 0x0A;
                    array[2][1] = 0x0A;
                    array[2][2] = 0x0A;
                    array[2][3] = 0x0A;
                    array[3][0] = 0x0A;
                    array[3][1] = 0x0A;
                    array[3][2] = 0x0A;
                    array[3][3] = 0x0A;
                    break;
                case 7:
                    array[0][0] = *(str + i - 7);
                    array[0][1] = *(str + i - 6);
                    array[0][2] = *(str + i - 5);
                    array[0][3] = *(str + i - 4);
                    array[1][0] = *(str + i - 3);
                    array[1][1] = *(str + i - 2);
                    array[1][2] = *(str + i - 1);
                    array[1][3] = 0x09;
                    array[2][0] = 0x09;
                    array[2][1] = 0x09;
                    array[2][2] = 0x09;
                    array[2][3] = 0x09;
                    array[3][0] = 0x09;
                    array[3][1] = 0x09;
                    array[3][2] = 0x09;
                    array[3][3] = 0x09;
                    break;
                case 8:
                    array[0][0] = *(str + i - 8);
                    array[0][1] = *(str + i - 7);
                    array[0][2] = *(str + i - 6);
                    array[0][3] = *(str + i - 5);
                    array[1][0] = *(str + i - 4);
                    array[1][1] = *(str + i - 3);
                    array[1][2] = *(str + i - 2);
                    array[1][3] = *(str + i - 1);
                    array[2][0] = 0x08;
                    array[2][1] = 0x08;
                    array[2][2] = 0x08;
                    array[2][3] = 0x08;
                    array[3][0] = 0x08;
                    array[3][1] = 0x08;
                    array[3][2] = 0x08;
                    array[3][3] = 0x08;
                    break;
                case 9:
                    array[0][0] = *(str + i - 9);
                    array[0][1] = *(str + i - 8);
                    array[0][2] = *(str + i - 7);
                    array[0][3] = *(str + i - 6);
                    array[1][0] = *(str + i - 5);
                    array[1][1] = *(str + i - 4);
                    array[1][2] = *(str + i - 3);
                    array[1][3] = *(str + i - 2);
                    array[2][0] = *(str + i - 1);
                    array[2][1] = 0x07;
                    array[2][2] = 0x07;
                    array[2][3] = 0x07;
                    array[3][0] = 0x07;
                    array[3][1] = 0x07;
                    array[3][2] = 0x07;
                    array[3][3] = 0x07;
                    break;
                case 10:
                    array[0][0] = *(str + i - 10);
                    array[0][1] = *(str + i - 9);
                    array[0][2] = *(str + i - 8);
                    array[0][3] = *(str + i - 7);
                    array[1][0] = *(str + i - 6);
                    array[1][1] = *(str + i - 5);
                    array[1][2] = *(str + i - 4);
                    array[1][3] = *(str + i - 3);
                    array[2][0] = *(str + i - 2);
                    array[2][1] = *(str + i - 1);
                    array[2][2] = 0x06;
                    array[2][3] = 0x06;
                    array[3][0] = 0x06;
                    array[3][1] = 0x06;
                    array[3][2] = 0x06;
                    array[3][3] = 0x06;
                    break;
                case 11:
                    array[0][0] = *(str + i - 11);
                    array[0][1] = *(str + i - 10);
                    array[0][2] = *(str + i - 9);
                    array[0][3] = *(str + i - 8);
                    array[1][0] = *(str + i - 7);
                    array[1][1] = *(str + i - 6);
                    array[1][2] = *(str + i - 5);
                    array[1][3] = *(str + i - 34);
                    array[2][0] = *(str + i - 3);
                    array[2][1] = *(str + i - 2);
                    array[2][2] = *(str + i - 1);
                    array[2][3] = 0x05;
                    array[3][0] = 0x05;
                    array[3][1] = 0x05;
                    array[3][2] = 0x05;
                    array[3][3] = 0x05;
                    break;
                case 12:
                    array[0][0] = *(str + i - 12);
                    array[0][1] = *(str + i - 11);
                    array[0][2] = *(str + i - 10);
                    array[0][3] = *(str + i - 9);
                    array[1][0] = *(str + i - 8);
                    array[1][1] = *(str + i - 7);
                    array[1][2] = *(str + i - 6);
                    array[1][3] = *(str + i - 5);
                    array[2][0] = *(str + i - 4);
                    array[2][1] = *(str + i - 3);
                    array[2][2] = *(str + i - 2);
                    array[2][3] = *(str + i - 1);
                    array[3][0] = 0x04;
                    array[3][1] = 0x04;
                    array[3][2] = 0x04;
                    array[3][3] = 0x04;
                    break;
                case 13:
                    array[0][0] = *(str + i - 13);
                    array[0][1] = *(str + i - 12);
                    array[0][2] = *(str + i - 11);
                    array[0][3] = *(str + i - 10);
                    array[1][0] = *(str + i - 9);
                    array[1][1] = *(str + i - 8);
                    array[1][2] = *(str + i - 7);
                    array[1][3] = *(str + i - 6);
                    array[2][0] = *(str + i - 5);
                    array[2][1] = *(str + i - 4);
                    array[2][2] = *(str + i - 3);
                    array[2][3] = *(str + i - 2);
                    array[3][0] = *(str + i - 1);
                    array[3][1] = 0x03;
                    array[3][2] = 0x03;
                    array[3][3] = 0x03;
                    break;
                case 14:
                    array[0][0] = *(str + i - 14);
                    array[0][1] = *(str + i - 13);
                    array[0][2] = *(str + i - 12);
                    array[0][3] = *(str + i - 11);
                    array[1][0] = *(str + i - 10);
                    array[1][1] = *(str + i - 9);
                    array[1][2] = *(str + i - 8);
                    array[1][3] = *(str + i - 7);
                    array[2][0] = *(str + i - 6);
                    array[2][1] = *(str + i - 5);
                    array[2][2] = *(str + i - 4);
                    array[2][3] = *(str + i - 3);
                    array[3][0] = *(str + i - 2);
                    array[3][1] = *(str + i - 1);
                    array[3][2] = 0x02;
                    array[3][3] = 0x02;
                    break;
                case 15:
                    array[0][0] = *(str + i - 15);
                    array[0][1] = *(str + i - 14);
                    array[0][2] = *(str + i - 13);
                    array[0][3] = *(str + i - 12);
                    array[1][0] = *(str + i - 11);
                    array[1][1] = *(str + i - 10);
                    array[1][2] = *(str + i - 9);
                    array[1][3] = *(str + i - 8);
                    array[2][0] = *(str + i - 7);
                    array[2][1] = *(str + i - 6);
                    array[2][2] = *(str + i - 5);
                    array[2][3] = *(str + i - 4);
                    array[3][0] = *(str + i - 3);
                    array[3][1] = *(str + i - 2);
                    array[3][2] = *(str + i - 1);
                    array[3][3] = 0x01;
                    break;
                } // switch
                int k = 0;
                step_4(array, key);
                while (k < 9)
                {
                    step_1(array);
                    step_2(array);
                    step_3(array);
                    step_4(array, key);
                    k++;
                }

                step_1(array);
                step_2(array);
                step_4(array, key);

                for (int i = 0; i < 4; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        printf("%02x", array[i][j]);
                    }
                }
            } // if statement for text
            else if (b == 'F')
            { // if statement for file
                printf("Enter the file name :\n");
                char file_name[1000];
                gets(file_name);
                FILE *fp = NULL;
                char str[10000];
                fp = fopen(file_name, "r");
                if (fp == NULL)
                { // if statement for file pointer to be null
                    printf("Error");
                    exit(1);
                } // if statement for file pointer to be null
                int k = 0;
                while (!feof(fp))
                {
                    str[k] = fgetc(fp + k);
                    k++;
                }
                int i = strlen(str);
                int l = i / 16;
                unsigned char arr[4][4];
                for (int i = 0; i < l; i++)
                { // assigning string to array
                    arr[0][0] = *(str + (15 * i));
                    arr[1][0] = *(str + ((15 * i) + 1));
                    arr[2][0] = *(str + ((15 * i) + 2));
                    arr[3][0] = *(str + ((15 * i) + 3));

                    arr[0][1] = *(str + ((15 * i) + 4));
                    arr[1][1] = *(str + ((15 * i) + 5));
                    arr[2][1] = *(str + ((15 * i) + 6));
                    arr[3][1] = *(str + ((15 * i) + 7));

                    arr[0][2] = *(str + ((15 * i) + 8));
                    arr[1][2] = *(str + ((15 * i) + 9));
                    arr[2][2] = *(str + ((15 * i) + 10));
                    arr[3][2] = *(str + ((15 * i) + 11));

                    arr[0][3] = *(str + ((15 * i) + 12));
                    arr[1][3] = *(str + ((15 * i) + 13));
                    arr[2][3] = *(str + ((15 * i) + 14));
                    arr[3][3] = *(str + ((15 * i) + 15));

                    int j = 0;
                    step_4(arr, key);
                    while (j < 9)
                    {
                        step_1(arr);
                        step_2(arr);
                        step_3(arr);
                        step_4(arr, key);
                        j++;
                    }

                    step_1(arr);
                    step_2(arr);
                    step_4(arr, key);

                    for (int i = 0; i < 4; i++)
                    {
                        for (int j = 0; j < 4; j++)
                        {
                            printf("%02x", arr[i][j]);
                        }
                    }
                } // assigning string to array
                int pkcs = i % 16;

                unsigned char array[4][4];
                switch (pkcs)
                { // switch
                case 1:
                    array[0][0] = *(str + i - 1);
                    array[0][1] = 0x0F;
                    array[0][2] = 0x0F;
                    array[0][3] = 0x0F;
                    array[1][0] = 0x0F;
                    array[1][1] = 0x0F;
                    array[1][2] = 0x0F;
                    array[1][3] = 0x0F;
                    array[2][0] = 0x0F;
                    array[2][1] = 0x0F;
                    array[2][2] = 0x0F;
                    array[2][3] = 0x0F;
                    array[3][0] = 0x0F;
                    array[3][1] = 0x0F;
                    array[3][2] = 0x0F;
                    array[3][3] = 0x0F;
                    break;
                case 2:
                    array[0][0] = *(str + i - 2);
                    array[0][1] = *(str + i - 1);
                    array[0][2] = 0x0E;
                    array[0][3] = 0x0E;
                    array[1][0] = 0x0E;
                    array[1][1] = 0x0E;
                    array[1][2] = 0x0E;
                    array[1][3] = 0x0E;
                    array[2][0] = 0x0E;
                    array[2][1] = 0x0E;
                    array[2][2] = 0x0E;
                    array[2][3] = 0x0E;
                    array[3][0] = 0x0E;
                    array[3][1] = 0x0E;
                    array[3][2] = 0x0E;
                    array[3][3] = 0x0E;
                    break;
                case 3:
                    array[0][0] = *(str + i - 3);
                    array[0][1] = *(str + i - 2);
                    array[0][2] = *(str + i - 1);
                    array[0][3] = 0x0D;
                    array[1][0] = 0x0D;
                    array[1][1] = 0x0D;
                    array[1][2] = 0x0D;
                    array[1][3] = 0x0D;
                    array[2][0] = 0x0D;
                    array[2][1] = 0x0D;
                    array[2][2] = 0x0D;
                    array[2][3] = 0x0D;
                    array[3][0] = 0x0D;
                    array[3][1] = 0x0D;
                    array[3][2] = 0x0D;
                    array[3][3] = 0x0D;
                    break;
                case 4:
                    array[0][0] = *(str + i - 4);
                    array[0][1] = *(str + i - 3);
                    array[0][2] = *(str + i - 2);
                    array[0][3] = *(str + i - 1);
                    array[1][0] = 0x0C;
                    array[1][1] = 0x0C;
                    array[1][2] = 0x0C;
                    array[1][3] = 0x0C;
                    array[2][0] = 0x0C;
                    array[2][1] = 0x0C;
                    array[2][2] = 0x0C;
                    array[2][3] = 0x0C;
                    array[3][0] = 0x0C;
                    array[3][1] = 0x0C;
                    array[3][2] = 0x0C;
                    array[3][3] = 0x0C;
                    break;
                case 5:
                    array[0][0] = *(str + i - 5);
                    array[0][1] = *(str + i - 4);
                    array[0][2] = *(str + i - 3);
                    array[0][3] = *(str + i - 2);
                    array[1][0] = *(str + i - 1);
                    array[1][1] = 0x0B;
                    array[1][2] = 0x0B;
                    array[1][3] = 0x0B;
                    array[2][0] = 0x0B;
                    array[2][1] = 0x0B;
                    array[2][2] = 0x0B;
                    array[2][3] = 0x0B;
                    array[3][0] = 0x0B;
                    array[3][1] = 0x0B;
                    array[3][2] = 0x0B;
                    array[3][3] = 0x0B;
                    break;
                case 6:
                    array[0][0] = *(str + i - 6);
                    array[0][1] = *(str + i - 5);
                    array[0][2] = *(str + i - 4);
                    array[0][3] = *(str + i - 3);
                    array[1][0] = *(str + i - 2);
                    array[1][1] = *(str + i - 1);
                    array[1][2] = 0x0A;
                    array[1][3] = 0x0A;
                    array[2][0] = 0x0A;
                    array[2][1] = 0x0A;
                    array[2][2] = 0x0A;
                    array[2][3] = 0x0A;
                    array[3][0] = 0x0A;
                    array[3][1] = 0x0A;
                    array[3][2] = 0x0A;
                    array[3][3] = 0x0A;
                    break;
                case 7:
                    array[0][0] = *(str + i - 7);
                    array[0][1] = *(str + i - 6);
                    array[0][2] = *(str + i - 5);
                    array[0][3] = *(str + i - 4);
                    array[1][0] = *(str + i - 3);
                    array[1][1] = *(str + i - 2);
                    array[1][2] = *(str + i - 1);
                    array[1][3] = 0x09;
                    array[2][0] = 0x09;
                    array[2][1] = 0x09;
                    array[2][2] = 0x09;
                    array[2][3] = 0x09;
                    array[3][0] = 0x09;
                    array[3][1] = 0x09;
                    array[3][2] = 0x09;
                    array[3][3] = 0x09;
                    break;
                case 8:
                    array[0][0] = *(str + i - 8);
                    array[0][1] = *(str + i - 7);
                    array[0][2] = *(str + i - 6);
                    array[0][3] = *(str + i - 5);
                    array[1][0] = *(str + i - 4);
                    array[1][1] = *(str + i - 3);
                    array[1][2] = *(str + i - 2);
                    array[1][3] = *(str + i - 1);
                    array[2][0] = 0x08;
                    array[2][1] = 0x08;
                    array[2][2] = 0x08;
                    array[2][3] = 0x08;
                    array[3][0] = 0x08;
                    array[3][1] = 0x08;
                    array[3][2] = 0x08;
                    array[3][3] = 0x08;
                    break;
                case 9:
                    array[0][0] = *(str + i - 9);
                    array[0][1] = *(str + i - 8);
                    array[0][2] = *(str + i - 7);
                    array[0][3] = *(str + i - 6);
                    array[1][0] = *(str + i - 5);
                    array[1][1] = *(str + i - 4);
                    array[1][2] = *(str + i - 3);
                    array[1][3] = *(str + i - 2);
                    array[2][0] = *(str + i - 1);
                    array[2][1] = 0x07;
                    array[2][2] = 0x07;
                    array[2][3] = 0x07;
                    array[3][0] = 0x07;
                    array[3][1] = 0x07;
                    array[3][2] = 0x07;
                    array[3][3] = 0x07;
                    break;
                case 10:
                    array[0][0] = *(str + i - 10);
                    array[0][1] = *(str + i - 9);
                    array[0][2] = *(str + i - 8);
                    array[0][3] = *(str + i - 7);
                    array[1][0] = *(str + i - 6);
                    array[1][1] = *(str + i - 5);
                    array[1][2] = *(str + i - 4);
                    array[1][3] = *(str + i - 3);
                    array[2][0] = *(str + i - 2);
                    array[2][1] = *(str + i - 1);
                    array[2][2] = 0x06;
                    array[2][3] = 0x06;
                    array[3][0] = 0x06;
                    array[3][1] = 0x06;
                    array[3][2] = 0x06;
                    array[3][3] = 0x06;
                    break;
                case 11:
                    array[0][0] = *(str + i - 11);
                    array[0][1] = *(str + i - 10);
                    array[0][2] = *(str + i - 9);
                    array[0][3] = *(str + i - 8);
                    array[1][0] = *(str + i - 7);
                    array[1][1] = *(str + i - 6);
                    array[1][2] = *(str + i - 5);
                    array[1][3] = *(str + i - 34);
                    array[2][0] = *(str + i - 3);
                    array[2][1] = *(str + i - 2);
                    array[2][2] = *(str + i - 1);
                    array[2][3] = 0x05;
                    array[3][0] = 0x05;
                    array[3][1] = 0x05;
                    array[3][2] = 0x05;
                    array[3][3] = 0x05;
                    break;
                case 12:
                    array[0][0] = *(str + i - 12);
                    array[0][1] = *(str + i - 11);
                    array[0][2] = *(str + i - 10);
                    array[0][3] = *(str + i - 9);
                    array[1][0] = *(str + i - 8);
                    array[1][1] = *(str + i - 7);
                    array[1][2] = *(str + i - 6);
                    array[1][3] = *(str + i - 5);
                    array[2][0] = *(str + i - 4);
                    array[2][1] = *(str + i - 3);
                    array[2][2] = *(str + i - 2);
                    array[2][3] = *(str + i - 1);
                    array[3][0] = 0x04;
                    array[3][1] = 0x04;
                    array[3][2] = 0x04;
                    array[3][3] = 0x04;
                    break;
                case 13:
                    array[0][0] = *(str + i - 13);
                    array[0][1] = *(str + i - 12);
                    array[0][2] = *(str + i - 11);
                    array[0][3] = *(str + i - 10);
                    array[1][0] = *(str + i - 9);
                    array[1][1] = *(str + i - 8);
                    array[1][2] = *(str + i - 7);
                    array[1][3] = *(str + i - 6);
                    array[2][0] = *(str + i - 5);
                    array[2][1] = *(str + i - 4);
                    array[2][2] = *(str + i - 3);
                    array[2][3] = *(str + i - 2);
                    array[3][0] = *(str + i - 1);
                    array[3][1] = 0x03;
                    array[3][2] = 0x03;
                    array[3][3] = 0x03;
                    break;
                case 14:
                    array[0][0] = *(str + i - 14);
                    array[0][1] = *(str + i - 13);
                    array[0][2] = *(str + i - 12);
                    array[0][3] = *(str + i - 11);
                    array[1][0] = *(str + i - 10);
                    array[1][1] = *(str + i - 9);
                    array[1][2] = *(str + i - 8);
                    array[1][3] = *(str + i - 7);
                    array[2][0] = *(str + i - 6);
                    array[2][1] = *(str + i - 5);
                    array[2][2] = *(str + i - 4);
                    array[2][3] = *(str + i - 3);
                    array[3][0] = *(str + i - 2);
                    array[3][1] = *(str + i - 1);
                    array[3][2] = 0x02;
                    array[3][3] = 0x02;
                    break;
                case 15:
                    array[0][0] = *(str + i - 15);
                    array[0][1] = *(str + i - 14);
                    array[0][2] = *(str + i - 13);
                    array[0][3] = *(str + i - 12);
                    array[1][0] = *(str + i - 11);
                    array[1][1] = *(str + i - 10);
                    array[1][2] = *(str + i - 9);
                    array[1][3] = *(str + i - 8);
                    array[2][0] = *(str + i - 7);
                    array[2][1] = *(str + i - 6);
                    array[2][2] = *(str + i - 5);
                    array[2][3] = *(str + i - 4);
                    array[3][0] = *(str + i - 3);
                    array[3][1] = *(str + i - 2);
                    array[3][2] = *(str + i - 1);
                    array[3][3] = 0x01;
                    break;
                } // switch
                int k = 0;
                step_4(array, key);
                while (k < 9)
                {
                    step_1(array);
                    step_2(array);
                    step_3(array);
                    step_4(array, key);
                    k++;
                }

                step_1(array);
                step_2(array);
                step_4(array, key);

                for (int i = 0; i < 4; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        printf("%02x", array[i][j]);
                    }
                }
            } // if statement for file
        } // else for aes encryption
    } // if statement for encryption
    else if (a == 'D')
    { // if statement for decryption
        printf("If you want to use classical cipher press'C' or for aes 128 press'A'\n");
        char Classic_aes;
        scanf("%c", &Classic_aes);
        if (Classic_aes == 'C')
        { // if statement for classical decoding
            printf("Enter key\n");
            int n;
            scanf("%d", &n);
            printf("If you are entering text press 'T' for file.txt press 'F'\n");
            char b;
            scanf("%c/n", &b);
            getchar();
            if (b == 'T')
            { // if statement for text
                char str[1000];
                printf("Enter the text\n");
                gets(str);
                Vingere_Decryption(*str, n);
            } // if statement for text
            else if (b == 'F')
            { // else for file in classic
                printf("Enter the file name :\n");
                char file_name[1000];
                gets(file_name);
                FILE *fp = NULL;
                char str[10000];
                fp = fopen(file_name, "r");
                if (fp == NULL)
                { // if statement for file pointer to be null
                    printf("Error");
                    exit(1);
                } // if statement for file pointer to be null
                int k = 0;
                while (!feof(fp))
                {
                    str[k] = fgetc(fp + k);
                    k++;
                }
                Vingere_Decryption(*file_name, n);
            } // else for fille in classic
        } // if statement for classical decoding
        else if (Classic_aes == 'A')
        { // else statement for decoding aes 128
            printf("Enter key\n");
            char key[16];
            gets(key);
            printf("Enter the text for decryption :");
            unsigned char str[1000];
            unsigned char arr[4][4];
            gets(str);
            int k = strlen(str);
            int len = k / 32;
            for (int x = 0; x < len; x++)
            {
                for (int i = 0; i < 4; i++)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        char temp[3];

                        int pair = i * 4 + j;

                        temp[0] = str[x * 32 + pair * 2];
                        temp[1] = str[x * 32 + pair * 2 + 1];
                        temp[2] = '\0';

                        arr[i][j] = (unsigned char)strtol(temp, NULL, 16);
                    }
                }
            }
            int i = 0;
            Decoding_Step_4(arr, key);
            while (i < 9)
            {
                Decoding_Step_1(arr);
                Decoding_Step_2(arr);
                Decoding_Step_4(arr, key);
                Decoding_Step_3(arr);
                i++;
            }
            Decoding_Step_1(arr);
            Decoding_Step_2(arr);
            Decoding_Step_4(arr, key);

            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    printf("%c ", arr[i][j]);
                }
            }
        } // else statement for decoding aes 128
    } // if statement for decryption

} // main
